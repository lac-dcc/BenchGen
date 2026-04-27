#include "dGenerator.h"

void DGenerator::generateIncludes() {
    // public so sub-modules that `import baseName` inherit these symbols
    includes.push_back("public import core.stdc.stdio;");
    includes.push_back("public import core.stdc.stdlib;");
    includes.push_back("public import core.stdc.string;");
    includes.push_back("public import std.conv : to;");
    includes.push_back("public import std.process : environment;");
    std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
}

void DGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
    globalVars.push_back("");
    globalVars.push_back("void DEBUG_NEW(int id)    { debug printf(\"[NEW]\\t\\tId %d created\\n\", id); }");
    globalVars.push_back("void DEBUG_COPY(int id)   { debug printf(\"[COPY]\\t\\tId %d copied\\n\", id); }");
    globalVars.push_back("void DEBUG_RETURN(int id) { debug printf(\"[RETURN]\\tId %d returned\\n\", id); }");
    globalVars.push_back("void DEBUG_FREE(int id)   { debug printf(\"[FREE]\\t\\tId %d freed\\n\", id); }");
}

void DGenerator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({
        "ulong get_path() {",
        "    string path = environment.get(\"BENCH_PATH\");",
        "    if (path !is null) {",
        "        return to!ulong(path);",
        "    } else {",
        "        ulong hi = benchgen_rand();",
        "        ulong lo = benchgen_rand();",
        "        return (hi << 32) | lo;",
        "    }",
        "}"
    });
    functions.push_back(rngFunction);
}

void DGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine({
        "static ulong benchgen_state = 1;",
        "",
        "void benchgen_srand(ulong seed) {",
        "    benchgen_state = seed;",
        "}",
        "",
        "ulong benchgen_rand() {",
        "    benchgen_state = 6364136223846793005UL * benchgen_state + 1UL;",
        "    return benchgen_state >> 32;",
        "}",
        ""
    });
    mainFunction.addLine({"int main(string[] args) {",
                          "   int loopsFactor = 100;",
                          "   benchgen_srand(0);",
                          "   for (int i = 1; i < args.length; i++) {",
                          "      if (args[i] == \"-path-seed\") {",
                          "         i++;",
                          "         if (i < args.length) {",
                          "            benchgen_srand(to!ulong(args[i]));",
                          "         }",
                          "      }",
                          "      else if (args[i] == \"-loops-factor\") {",
                          "         i++;",
                          "         if (i < args.length) {",
                          "            loopsFactor = to!int(args[i]);",
                          "         }",
                          "      }",
                          "   }",
                          "   return 0;",
                          "}"});
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void DGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void DGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void DGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void DGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = VariableFactory::genTypeString(varType) + "* func" + std::to_string(funcId) + "(" + VariableFactory::genTypeString(varType) + "_param* vars, ";

    for (int i = 0; i < nParameters; i++) {
        funcHeader += "const ulong PATH" + std::to_string(i) + ", ";
    }
    funcHeader += "int loopsFactor";
    funcHeader += ") {";
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
    addLine("size_t pCounter = vars.size;");
}

bool DGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string DGenerator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < (int)currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void DGenerator::callFunc(int funcId, int nParameters) {
    std::string param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = var->typeString + "* " + var->name + " = func" + std::to_string(funcId) + "(&" + param + ", ";

    for (int i = 0; i < nParameters; i++)
        line += "get_path(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);

    line = "DEBUG_RETURN(" + var->name + ".id);";
    addLine(line);

    line = "free(" + param + ".data);";
    addLine(line);
}

int DGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void DGenerator::freeVars(bool hasReturn, int returnVarPos) {
    int numberOfAddedVars = currentScope.top().numberOfAddedVars;
    std::vector<int> availableVarsId = currentScope.top().avaiableVarsID;
    for (int i = 0; i < numberOfAddedVars; i++) {
        int varPos = availableVarsId.size() - i - 1;
        if (!hasReturn || varPos != returnVarPos) {
            GeneratorVariable* var = variables[availableVarsId[varPos]];
            addLine(var->free());
        }
    }
}

void DGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void DGenerator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void DGenerator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void DGenerator::genMakefile(std::string dir, std::string target) {
    std::ofstream makefile;
    makefile.open(dir + "Makefile");
    makefile << "DC = dmd\n";
    makefile << "DFLAGS = -g -w -I$(SRC_DIR)\n";
    makefile << "TARGET = " + target + "\n";
    makefile << "SRC_DIR = src\n";
    makefile << "SRC = $(wildcard $(SRC_DIR)/*.d)\n";
    makefile << "\n";
    makefile << "all: $(TARGET)\n";
    makefile << "\n";
    makefile << "$(TARGET): $(SRC)\n";
    makefile << "\t$(DC) $(DFLAGS) -of=$(TARGET) $(SRC)\n";
    makefile << "\n";
    makefile << "debug: $(SRC)\n";
    makefile << "\t$(DC) $(DFLAGS) -debug -of=$(TARGET) $(SRC)\n";
    makefile << "\n";
    makefile << "llvm: $(SRC)\n";
    makefile << "\tldc2 -I$(SRC_DIR) -output-ll -of=$(TARGET) $(SRC)\n";
    makefile << "\n";
    makefile << "clean:\n";
    makefile << "\trm -f $(TARGET) *.o *.ll\n";
}

void DGenerator::genReadme(std::string dir, std::string target) {
    std::ofstream readme;
    readme.open(dir + "README.md");
    readme << "# " + target + " Program\n\n";
    readme << "This program was generated by the **BenchGen** tool.\n\n";

    readme << "## Compilation\n\n";
    readme << "There are two ways to compile the program:\n\n";
    readme << "1. Standard Compilation:\n\n";
    readme << "    ```bash\n";
    readme << "    make\n";
    readme << "    ```\n\n";
    readme << "    This will create the executable file `" + target + "`\n\n";
    readme << "2. Debug Compilation:\n\n";
    readme << "    ```bash\n";
    readme << "    make debug\n";
    readme << "    ```\n\n";
    readme << "    This will create an executable with debug mode enabled, which prints additional debugging information.\n\n";
    readme << "3. LLVM Compilation (requires ldc2):\n\n";
    readme << "    ```bash\n";
    readme << "    make llvm\n";
    readme << "    ```\n\n";
    readme << "    This will produce `.ll` LLVM IR files.\n\n";

    readme << "## Run\n\n";
    readme << "To run the program, execute the following command:\n\n";
    readme << "```bash\n";
    readme << "./" + target + "\n";
    readme << "```\n\n";

    readme << "### Optional Arguments\n\n";
    readme << "This program accepts the following optional arguments:\n\n";
    readme << "-   `-path-seed <seed>`: Sets the seed for the random number generator. Default is `0`.\n\n";
    readme << "-   `-loops-factor <factor>`: Sets the factor for the number of loops. Default is `100`.\n\n";

    readme << "#### Example:\n\n";
    readme << "```bash\n";
    readme << "./" + target + " -loops-factor 50 -path-seed 123\n";
    readme << "```";
}

void DGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceDir = benchDir + "src/";
    std::string baseName = std::filesystem::path(benchmarkName).filename().string();

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    // Collect non-path function ids so the main module can public-import them all.
    // This lets any sub-module call any other function just by importing the main module.
    std::vector<int> funcIds;
    for (auto& func : functions) {
        if (func.getId() != -1) {
            funcIds.push_back(func.getId());
        }
    }

    // Main file: baseName.d
    // Contains imports, public re-exports of sub-modules, types, DEBUG helpers, RNG + main.
    {
        std::ofstream mainFile;
        mainFile.open(sourceDir + baseName + ".d");

        mainFile << "module " << baseName << ";\n";
        for (auto& inc : includes) {
            mainFile << inc << "\n";
        }
        mainFile << "\n";

        // Selective public imports — forward-declare each function (mirrors C's header).
        // Using `import mod : sym` avoids the module-name / function-name collision.
        mainFile << "public import path : get_path;\n";
        for (int id : funcIds) {
            mainFile << "public import func" << id << " : func" << id << ";\n";
        }
        mainFile << "\n";

        for (auto& var : globalVars) {
            mainFile << var << "\n";
        }
        mainFile << "\n";

        for (auto& line : mainFunction.getLines()) {
            mainFile << line << "\n";
        }
        mainFile << "\n";
        mainFile.close();
    }

    // One file per function
    for (auto& func : functions) {
        std::string fileName;
        std::string moduleName;
        if (func.getId() == -1) {
            fileName = "path.d";
            moduleName = "path";
        } else {
            fileName = "func" + std::to_string(func.getId()) + ".d";
            moduleName = "func" + std::to_string(func.getId());
        }

        std::ofstream funcFile;
        funcFile.open(sourceDir + fileName);
        funcFile << "module " << moduleName << ";\n";
        funcFile << "import " << baseName << ";\n\n";
        for (auto& line : func.getLines()) {
            funcFile << line << "\n";
        }
        funcFile << "\n";
        funcFile.close();
    }

    this->genMakefile(benchDir, baseName);
    this->genReadme(benchDir, baseName);
}
