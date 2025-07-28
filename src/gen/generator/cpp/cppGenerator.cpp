#include "cppGenerator.h"

CPPGenerator::CPPGenerator(std::string variableType) {
    this->ifCounter.push(0);
    this->varCounter = 0;
    this->loopLevel = 0;
    this->loopCounter = 0;
    this->varType = variableType;
    currentScope.push(GeneratorScope(0));
    generateIncludes();
    generateGlobalVars();
    generateRandomNumberGenerator();
    generateMainFunction();
}

void CPPGenerator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    includes.push_back("#include <string.h>");
    includes.push_back("#ifdef DEBUG");
    includes.push_back("    #define DEBUG_NEW(id) printf(\"[NEW]\\t\\tId \%d created\\n\", id)");
    includes.push_back("    #define DEBUG_COPY(id) printf(\"[COPY]\\t\\tId \%d copied\\n\", id)");
    includes.push_back("    #define DEBUG_RETURN(id) printf(\"[RETURN]\\tId \%d returned\\n\", id)");
    includes.push_back("    #define DEBUG_FREE(id) printf(\"[FREE]\\t\\tId \%d freed\\n\", id)");
    includes.push_back("#else");
    includes.push_back("    #define DEBUG_NEW(id)");
    includes.push_back("    #define DEBUG_COPY(id)");
    includes.push_back("    #define DEBUG_RETURN(id)");
    includes.push_back("    #define DEBUG_FREE(id)");
    includes.push_back("#endif");
    std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
}

void CPPGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void CPPGenerator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({"unsigned long get_path() {",
                         "   const char* path = getenv(\"BENCH_PATH\");",
                         "   if(path != NULL) { ",
                         "      return atoi(path);",
                         "   }else {",
                         "      unsigned long n = rand();",
                         "      return (n << 32) | rand();",
                         "   }",
                         "}"});
    functions.push_back(rngFunction);
}

void CPPGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine({"int main(int argc, char** argv) {",
                          "   int loopsFactor = 100;",
                          "   srand(0);",
                          "   for (int i = 1; i < argc; i++) {",
                          "      if (strcmp(argv[i], \"-path-seed\") == 0) {",
                          "         i++;",
                          "         if (i < argc) {",
                          "            srand(atoi(argv[i]));",
                          "         }",
                          "      }",
                          "      else if (strcmp(argv[i], \"-loops-factor\") == 0) {",
                          "         i++;",
                          "         if (i < argc) {",
                          "            loopsFactor = atoi(argv[i]);",
                          "         }",
                          "      }",
                          "   }",
                          "   return 0;",
                          "}"});
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void CPPGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void CPPGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void CPPGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void CPPGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = VariableFactory::genTypeString(varType) + "* func" + std::to_string(funcId) + "(" + VariableFactory::genTypeString(varType) + "_param* vars, ";
    for (int i = 0; i < nParameters; i++) {
        funcHeader += "const unsigned long PATH" + std::to_string(i) + ", ";
    }
    funcHeader += "int loopsFactor";
    funcHeader += ") {";
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
    addLine("size_t pCounter = vars->size;");
}

bool CPPGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string CPPGenerator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < (int)currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void CPPGenerator::callFunc(int funcId, int nParameters) {
    std::string param = "";
    param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = var->typeString + "* " + var->name + " = func" + std::to_string(funcId) + "(&" + param + ", ";

    for (int i = 0; i < nParameters; i++)
        line += "get_path(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);

    line = "DEBUG_RETURN(" + var->name + "->id);";
    addLine(line);

    line = "free(" + param + ".data);";
    addLine(line);
}

int CPPGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void CPPGenerator::freeVars(bool hasReturn, int returnVarPos) {
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

void CPPGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void CPPGenerator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void CPPGenerator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void CPPGenerator::genMakefile(std::string dir, std::string target) {
    std::ofstream makefile;

    makefile.open(dir + "Makefile");
    makefile << "CC = clang\n";
    makefile << "LLVMFLAGS = -DDEBUG -S -emit-llvm\n";
    makefile << "TARGET = " + target + "\n";
    makefile << "SRC_DIR = src\n";
    makefile << "OBJ_DIR = obj\n";
    makefile << "LL_DIR = ll\n\n";

    makefile << "SRC = $(wildcard $(SRC_DIR)/*.c)\n";
    makefile << "OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))\n";
    makefile << "LL = $(patsubst $(SRC_DIR)/%.c, $(LL_DIR)/%.ll, $(SRC))\n\n";

    makefile << "all: $(TARGET)\n\n";

    makefile << "$(TARGET): $(OBJ)\n";
    makefile << "\t$(CC) $(OBJ) -o $(TARGET) \n\n";

    makefile << "$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)\n";
    makefile << "\t$(CC) ${CFLAGS} -c $< -o $@\n\n";

    makefile << "$(LL_DIR)/%.ll: $(SRC_DIR)/%.c | $(LL_DIR)\n";
    makefile << "\t$(CC) ${LLVMFLAGS} $< -o $@\n\n";

    makefile << "$(OBJ_DIR) $(LL_DIR):\n";
    makefile << "\tmkdir -p $@\n\n";

    makefile << "llvm: $(LL)\n";
    makefile << "\t$(CC) ./ll/*.ll -o llvm_${TARGET}\n\n";

    makefile << "clean:\n";
    makefile << "\trm -f $(OBJ) $(LL) $(TARGET) llvm_${TARGET}\n";
    makefile << "\trm -rf $(OBJ_DIR) $(LL_DIR)\n\n";
}

void CPPGenerator::genReadme(std::string dir, std::string target) {
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
    readme << "    This will create:\n\n";
    readme << "    - The executable file `" + target + "`\n\n";
    readme << "    - The object files in the `obj` directory\n\n";
    readme << "2. LLVM Compilation:\n\n";
    readme << "    ```bash\n";
    readme << "    make llvm\n";
    readme << "    ```\n\n";
    readme << "    This will create and `ll` folder containing `.ll` files, which are LLVM IR (Intermediate Representation).\n\n";

    readme << "### Compiling with debug mode:\n\n";
    readme << "If you want to include debug prints in the output, compile the program with the `-DDEBUG` flag by modifying the `CFLAGS` during the `make` command:\n\n";
    readme << "```bash\n";
    readme << "make CFLAGS=\"-DDEBUG\"\n";
    readme << "```\n\n";
    readme << "This will create an executable with debug mode enabled, which prints additional debugging information to the terminal during execution.\n\n";

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

void CPPGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceFile = benchmarkName + ".c";
    std::string includeName = benchmarkName + ".h";
    std::string sourceDir = benchDir + "src/";

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    std::ofstream file;
    file.open(sourceDir + sourceFile);

    std::ofstream includeFile;
    includeFile.open(sourceDir + includeName);

    // Includes
    includeFile << "#ifndef " + benchmarkName + "\n";
    includeFile << "#define " + benchmarkName + "\n";

    for (auto include : includes) {
        includeFile << include << std::endl;
    }
    file << "#include \"" << includeName << "\"";
    file << std::endl;

    // Global variables
    for (auto var : globalVars) {
        includeFile << var << std::endl;
    }
    includeFile << std::endl;

    // Headers
    for (auto func : functions) {
        std::string header = func.getLines()[0];
        header.pop_back();
        header.pop_back();
        header += ";";
        includeFile << header << std::endl;
    }
    file << std::endl;

    // Main function
    auto lines = mainFunction.getLines();
    for (auto line : lines) {
        file << line << std::endl;
    }
    file << std::endl;

    // Functions
    for (auto func : functions) {
        std::string funcSource;
        if (func.getId() == -1) {
            funcSource = "path.c";
        } else {
            funcSource = "func" + std::to_string(func.getId()) + ".c";
        }
        std::ofstream funcFile;
        funcFile.open(sourceDir + funcSource);
        funcFile << "#include \"" << includeName << "\" \n";

        lines = func.getLines();
        for (auto line : lines) {
            funcFile << line << std::endl;
        }
        funcFile << std::endl;
        funcFile.close();
    }
    includeFile << "#endif";
    this->genMakefile(benchDir, benchmarkName);
    this->genReadme(benchDir, benchmarkName);
    includeFile.close();
    file.close();
}
