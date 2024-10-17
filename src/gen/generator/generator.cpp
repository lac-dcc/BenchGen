#include "generator.h"

Generator::Generator(std::string variableType) {
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

void Generator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
}

void Generator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void Generator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({"unsigned long rng() {",
                         "   unsigned long n = rand();",
                         "   return (n << 32) | rand();",
                         "}"});
    functions.push_back(rngFunction);
}

void Generator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine({"int main(int argc, char** argv) {",
                          "   if (argc < 2 || argc > 3) {",
                          "      printf(\"Usage: %s <paths seed> <loops factor (optional)>\\n\", argv[0]);",
                          "      return 1;",
                          "   }",
                          "   int loopsFactor = 100;",
                          "   if (argc == 3) {",
                          "      loopsFactor = atoi(argv[2]);",
                          "   }",
                          "   srand(atol(argv[1]));",
                          "   return 0;",
                          "}"});
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void Generator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void Generator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void Generator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void Generator::startFunc(int funcId, int nParameters) {
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

bool Generator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string Generator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void Generator::callFunc(int funcId, int nParameters) {
    std::string param = "";
    param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = var->typeString + "* " + var->name + " = func" + std::to_string(funcId) + "(&" + param + ", ";

    for (int i = 0; i < nParameters; i++)
        line += "rng(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);
    line = "free(" + param + ".data);";
    addLine(line);
}

int Generator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void Generator::freeVars(bool hasReturn, int returnVarPos) {
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

void Generator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void Generator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void Generator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void Generator::genMakefile(std::string dir, std::string target) {
    std::ofstream makefile;
    makefile.open(dir + "Makefile");
    makefile << "CC = clang\n";
    makefile << "CFLAGS = \n";
    makefile << "TARGET = " + target + "\n";
    makefile << "SRC_DIR = src\n";
    makefile << "OBJ_DIR = obj\n\n";

    makefile << "SRC = $(wildcard $(SRC_DIR)/*.c)\n";
    makefile << "OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))\n\n";

    makefile << "$(TARGET)_$(CC): $(OBJ)\n";
    makefile << "\t$(CC) ${CFLAGS} -o $(TARGET)_$(CC) $(OBJ)\n\n";

    makefile << "$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)\n";
    makefile << "\t$(CC) ${CFLAGS} -c $< -o $@\n\n";

    makefile << "$(OBJ_DIR):\n";
    makefile << "\tmkdir -p $(OBJ_DIR)\n\n";

    makefile << "clean:\n";
    makefile << "\trm -f $(OBJ) $(TARGET)_$(CC)\n\n";

    makefile << "%.o: %.c\n";
    // _________________
    // makefile << "CC = clang\n";
    // makefile << "CFLAGS = -emit-llvm\n";
    // makefile << "TARGET = " + target + "\n";
    // makefile << "SRC_DIR = src\n";
    // makefile << "OBJ_DIR = obj\n\n";

    // makefile << "SRC = $(wildcard $(SRC_DIR)/*.c)\n";
    // makefile << "OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.bc, $(SRC))\n\n";

    // makefile << "$(TARGET)_$(CC).bc: $(OBJ)\n";
    // makefile << "\tllvm-link -o $(TARGET)_$(CC).bc $(OBJ)\n\n";

    // makefile << "$(OBJ_DIR)/%.bc: $(SRC_DIR)/%.c | $(OBJ_DIR)\n";
    // makefile << "\t$(CC) ${CFLAGS} -c $< -o $@\n\n";

    // makefile << "$(OBJ_DIR):\n";
    // makefile << "\tmkdir -p $(OBJ_DIR)\n\n";

    // makefile << "clean:\n";
    // makefile << "\trm -f $(OBJ) $(TARGET)_$(CC).bc\n\n";

    // makefile << "%.o: %.c\n";
}

void Generator::generateFiles(std::string benchmarkName) {
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
            funcSource = "rng.c";
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
    includeFile.close();
    file.close();
}
