#include "nimGenerator.h"

void NimGenerator::generateIncludes() {
    includes.push_back("import std/[os, strutils]");
    includes.push_back("");
    includes.push_back("when defined(debug):");
    includes.push_back("  template debugNew*(id: int) = echo \"[NEW]\\t\\tId \", id, \" created\"");
    includes.push_back("  template debugCopy*(id: int) = echo \"[COPY]\\t\\tId \", id, \" copied\"");
    includes.push_back("  template debugReturn*(id: int) = echo \"[RETURN]\\tId \", id, \" returned\"");
    includes.push_back("  template debugFree*(id: int) = echo \"[FREE]\\t\\tId \", id, \" freed\"");
    includes.push_back("else:");
    includes.push_back("  template debugNew*(id: int) = discard");
    includes.push_back("  template debugCopy*(id: int) = discard");
    includes.push_back("  template debugReturn*(id: int) = discard");
    includes.push_back("  template debugFree*(id: int) = discard");
    std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
}

void NimGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void NimGenerator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({
        "proc getPath*(): uint64 =",
        "   let path = getEnv(\"BENCH_PATH\")",
        "   if path.len > 0:",
        "      return uint64(parseInt(path))",
        "   else:",
        "      let hi = uint64(benchgenRand())",
        "      let lo = uint64(benchgenRand())",
        "      return (hi shl 32) or lo"
    });
    functions.push_back(rngFunction);
}

void NimGenerator::generateMainFunction() {
    // RNG state and procs must be defined before path.nim (which calls benchgenRand),
    // so they go into globalVars which are written before the includes.
    globalVars.push_back("");
    globalVars.push_back("var benchgenState: uint64 = 1");
    globalVars.push_back("");
    globalVars.push_back("proc benchgenSrand*(seed: uint64) =");
    globalVars.push_back("   benchgenState = seed");
    globalVars.push_back("");
    globalVars.push_back("proc benchgenRand*(): uint64 =");
    globalVars.push_back("   benchgenState = 6364136223846793005'u64 * benchgenState + 1'u64");
    globalVars.push_back("   return benchgenState shr 32");
    globalVars.push_back("");

    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine({
        "when isMainModule:",
        "   var loopsFactor: cint = 100",
        "   benchgenSrand(0)",
        "   var i = 1",
        "   while i <= paramCount():",
        "      if paramStr(i) == \"-path-seed\":",
        "         i += 1",
        "         if i <= paramCount():",
        "            benchgenSrand(uint64(parseInt(paramStr(i))))",
        "      elif paramStr(i) == \"-loops-factor\":",
        "         i += 1",
        "         if i <= paramCount():",
        "            loopsFactor = cint(parseInt(paramStr(i)))",
        "      i += 1",
        "   discard 0",
        "   discard 1"
    });
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void NimGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void NimGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void NimGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void NimGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = "proc func" + std::to_string(funcId) + "*(vars: ptr ArrayTParam, ";
    for (int i = 0; i < nParameters; i++) {
        funcHeader += "PATH" + std::to_string(i) + ": uint64, ";
    }
    funcHeader += "loopsFactor: cint): ptr ArrayT =";
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
    addLine("var pCounter = vars.size");
}

bool NimGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string NimGenerator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < (int)currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void NimGenerator::callFunc(int funcId, int nParameters) {
    std::string param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = "var " + var->name + ": ptr ArrayT = func" + std::to_string(funcId) + "(addr " + param + ", ";
    for (int i = 0; i < nParameters; i++) {
        line += "getPath(), ";
    }
    line += "loopsFactor)";
    addLine(line);

    line = "debugReturn(" + var->name + ".id)";
    addLine(line);

    line = "dealloc(" + param + ".data)";
    addLine(line);
}

int NimGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void NimGenerator::freeVars(bool hasReturn, int returnVarPos) {
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

void NimGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name);
}

void NimGenerator::endScope() {
    currentScope.pop();
}

void NimGenerator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void NimGenerator::endIfScope() {
    currentScope.pop();
}

void NimGenerator::genMakefile(std::string dir, std::string target) {
    std::ofstream makefile;
    makefile.open(dir + "Makefile");
    makefile << "TARGET = " + target + "\n";
    makefile << "SRC_DIR = src\n";
    makefile << "NIMC = nim\n";
    makefile << "NIMFLAGS = c -d:release --out:$(TARGET)\n";
    makefile << "\n";
    makefile << "all: $(TARGET)\n";
    makefile << "\n";
    makefile << "$(TARGET): $(SRC_DIR)/$(TARGET).nim\n";
    makefile << "\t$(NIMC) $(NIMFLAGS) $<\n";
    makefile << "\n";
    makefile << "debug: $(SRC_DIR)/$(TARGET).nim\n";
    makefile << "\t$(NIMC) c -d:debug --out:$(TARGET) $<\n";
    makefile << "\n";
    makefile << "clean:\n";
    makefile << "\trm -f $(TARGET)\n";
    makefile << "\trm -rf nimcache\n";
}

void NimGenerator::genReadme(std::string dir, std::string target) {
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
    readme << "    This will create an executable with debug mode enabled, which prints\n";
    readme << "    additional debugging information (`[NEW]`, `[COPY]`, `[RETURN]`, `[FREE]`) to the terminal.\n\n";

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

void NimGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceDir = benchDir + "src/";
    std::string baseName = std::filesystem::path(benchmarkName).filename().string();

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    // Collect non-path function ids for include ordering
    std::vector<int> funcIds;
    for (auto& func : functions) {
        if (func.getId() != -1) {
            funcIds.push_back(func.getId());
        }
    }

    // Main file: types, debug templates, RNG procs, includes, main block
    {
        std::ofstream mainFile;
        mainFile.open(sourceDir + baseName + ".nim");

        for (auto& inc : includes) {
            mainFile << inc << "\n";
        }
        mainFile << "\n";

        for (auto& var : globalVars) {
            mainFile << var << "\n";
        }
        mainFile << "\n";

        // Emit forward declarations for every function so the include order doesn't
        // matter. DFS-order reversal alone is insufficient: a callee may be visited
        // by multiple callers, and the first-visit position can land before some of
        // its callers in the reversed order, leaving the body textually before the
        // declaration. Forward decls sidestep the ordering problem entirely.
        for (auto& func : functions) {
            if (func.getId() == -1) continue;
            const auto& lines = func.getLines();
            if (lines.empty()) continue;
            std::string header = lines.front();
            if (header.size() >= 2 && header.substr(header.size() - 2) == " =") {
                header.erase(header.size() - 2);
            }
            mainFile << header << "\n";
        }
        mainFile << "\n";

        mainFile << "include \"path\"\n";
        for (int i = (int)funcIds.size() - 1; i >= 0; i--) {
            mainFile << "include \"func" << funcIds[i] << "\"\n";
        }
        mainFile << "\n";

        for (auto& line : mainFunction.getLines()) {
            mainFile << line << "\n";
        }
        mainFile << "\n";
        mainFile.close();
    }

    // One file per function (path and func{id})
    for (auto& func : functions) {
        std::string fileName;
        if (func.getId() == -1) {
            fileName = "path.nim";
        } else {
            fileName = "func" + std::to_string(func.getId()) + ".nim";
        }

        std::ofstream funcFile;
        funcFile.open(sourceDir + fileName);
        for (auto& line : func.getLines()) {
            funcFile << line << "\n";
        }
        funcFile << "\n";
        funcFile.close();
    }

    this->genMakefile(benchDir, baseName);
    this->genReadme(benchDir, baseName);
}
