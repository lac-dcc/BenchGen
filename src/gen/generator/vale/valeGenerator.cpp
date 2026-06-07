#include "valeGenerator.h"

void ValeGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto& gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void ValeGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    // The first line seeds the threaded rng; the two trailing anchors are the
    // insertion point insertBack writes generated statements before. They are
    // dropped when main.vale is emitted (genMainFile).
    mainFunction.addLine({
        "rng = makeRng(0);",
        "// anchor",
        "// anchor"
    });
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void ValeGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void ValeGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void ValeGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void ValeGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    // Every function takes only the rng borrow and returns a BenchArray. nParameters
    // (the path-word count other backends thread) is unused: Vale drives branches off
    // the rng directly.
    func.addLine("func Func" + std::to_string(funcId) + "(rng &Rng) BenchArray {");
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
}

bool ValeGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

void ValeGenerator::callFunc(int funcId, int nParameters) {
    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    // In main the rng is an owned local (borrow it with &); inside a function it is
    // already a &Rng borrow and is forwarded as-is.
    std::string rngArg = currentFunction.top()->insertBack ? "&rng" : "rng";
    addLine(var->name + " = Func" + std::to_string(funcId) + "(" + rngArg + ");");
}

int ValeGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

// No-op: Vale frees owned values automatically when their references drop.
void ValeGenerator::freeVars(bool hasReturn, int returnVarPos) {}

void ValeGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void ValeGenerator::endScope() {
    currentScope.pop();
}

void ValeGenerator::endFunc() {
    currentScope.pop();
    currentFunction.pop();
    ifCounter.pop();
}

void ValeGenerator::endIfScope() {
    currentScope.pop();
}

void ValeGenerator::genTypesFile(const std::string& dir) {
    std::ofstream f;
    f.open(dir + "bench_types.vale");
    for (auto& line : globalVars) {
        f << line << "\n";
    }
    f.close();
}

void ValeGenerator::genFuncFiles(const std::string& dir) {
    for (auto& func : functions) {
        int id = func.getId();
        std::ofstream body;
        body.open(dir + "func" + std::to_string(id) + ".vale");
        auto lines = func.getLines();
        body << lines.front() << "\n";  // "func Func<id>(rng &Rng) BenchArray {"
        for (size_t i = 1; i < lines.size(); i++) {
            body << "   " << lines[i] << "\n";
        }
        body << "}\n";
        body.close();
    }
}

void ValeGenerator::genMainFile(const std::string& dir) {
    std::ofstream main;
    main.open(dir + "main.vale");
    main << "exported func main() {\n";
    auto lines = mainFunction.getLines();
    // Drop the two trailing anchors planted by generateMainFunction.
    for (size_t i = 0; i + 2 < lines.size(); i++) {
        main << "   " << lines[i] << "\n";
    }
    main << "}\n";
    main.close();
}

void ValeGenerator::genMakefile(const std::string& dir, const std::string& target) {
    std::ofstream makefile;
    makefile.open(dir + "Makefile");
    makefile << "TARGET = " << target << "\n";
    makefile << "\n";
    makefile << "all:\n";
    // --region_override unsafe-fast drops the generational-reference runtime checks
    // the frontend already proved unnecessary, giving raw speed comparable to the
    // other backends' optimised builds (the analogue of C's -O2).
    makefile << "\tvalec build benchmark=src --output_dir target --region_override unsafe-fast -o $(TARGET)\n";
    makefile << "\tcp target/$(TARGET) ./$(TARGET)\n";
    makefile << "\n";
    makefile << "clean:\n";
    makefile << "\trm -rf target $(TARGET)\n";
    makefile.close();
}

void ValeGenerator::genReadme(const std::string& dir, const std::string& target) {
    std::ofstream readme;
    readme.open(dir + "README.md");
    readme << "# " + target + " Program\n\n";
    readme << "This program was generated by the **BenchGen** tool.\n\n";
    readme << "## Requirements\n\n";
    readme << "The [Vale compiler](https://vale.dev) (`valec`) must be on your `PATH`.\n\n";
    readme << "## Compilation\n\n";
    readme << "```bash\n";
    readme << "make\n";
    readme << "```\n\n";
    readme << "This compiles the Vale module under `src/` with `valec build` and copies\n";
    readme << "the resulting executable to `./" + target + "`.\n\n";
    readme << "## Run\n\n";
    readme << "```bash\n";
    readme << "./" + target + "\n";
    readme << "```";
    readme.close();
}

void ValeGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceDir = benchDir + "src/";
    std::string baseName = std::filesystem::path(benchmarkName).filename().string();

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    genTypesFile(sourceDir);
    genFuncFiles(sourceDir);
    genMainFile(sourceDir);
    genMakefile(benchDir, baseName);
    genReadme(benchDir, baseName);
}
