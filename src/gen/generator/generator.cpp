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
    if (varType == "bool")
        includes.push_back("#include <stdbool.h>");
    else if (varType == "string" || varType == "array")
        includes.push_back("#include <string.h>");
    else if (varType == "vector")
        includes.push_back("#include <vector>");
    else if (varType == "list")
        includes.push_back("#include <list>");
}

void Generator::generateGlobalVars() {
    if (varType == "array") {
        globalVars.push_back("typedef struct {");
        globalVars.push_back("   unsigned int* data;");
        globalVars.push_back("   size_t size;");
        globalVars.push_back("} Array;");
        globalVars.push_back("typedef struct {");
        globalVars.push_back("   Array* data;");
        globalVars.push_back("   size_t size;");
        globalVars.push_back("} ArrayParam;");
    }
}

void Generator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine("unsigned long rng() {");
    rngFunction.addLine("   unsigned long n = rand();");
    rngFunction.addLine("   return (n << 32) | rand();");
    rngFunction.addLine("}");
    functions.push_back(rngFunction);
}

void Generator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine("int main(int argc, char** argv) {");
    mainFunction.addLine("   int loopsFactor = 100;");
    mainFunction.addLine("   if (argc < 2 || argc > 3) {");
    mainFunction.addLine("      printf(\"Usage: %s <paths seed> <loops factor (optional)>\\n\", argv[0]);");
    mainFunction.addLine("      return 1;");
    mainFunction.addLine("   }");
    mainFunction.addLine("   if (argc == 3) {");
    mainFunction.addLine("      loopsFactor = atoi(argv[2]);");
    mainFunction.addLine("   }");
    mainFunction.addLine("   srand(atol(argv[1]));");
    mainFunction.addLine("   return 0;");
    mainFunction.addLine("}");
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

std::string Generator::getVarTypeDeclaration() {
    if (varType == "scalar") {
        return "int";
    } else if (varType == "array") {
        return "Array";
    } else if (varType == "matrix") {
        return "Matrix";
    } else if (varType == "vector") {
        return "std::vector<int>";
    } else if (varType == "list") {
        return "std::list<int>";
    }
    return "";
}

void Generator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void Generator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void Generator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = getVarTypeDeclaration() + " func" + std::to_string(funcId) + "(";
    if (varType == "array") {
        funcHeader += "ArrayParam* vars, ";
    }
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

std::string Generator::createArrayParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    addLine("ArrayParam " + name + ";");
    addLine(name + ".size = " + std::to_string(currentScope.top().avaiableVarsID.size()) + ";");
    addLine(name + ".data = (Array*)malloc(" + name + ".size*sizeof(Array));");
    for (int i = 0; i < currentScope.top().avaiableVarsID.size(); i++) {
        GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[i]];
        addLine(name + ".data[" + std::to_string(i) + "] = " + var->name + ";");
    }
    return name;
}

void Generator::callFunc(int funcId, int nParameters) {
    std::string param = "";
    if (varType == "array")
        param = createArrayParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];

    std::string line = var->typeString + " " + var->name + " = func" + std::to_string(funcId) + "(";

    if (varType == "array")
        line += "&" + param + ", ";
    for (int i = 0; i < nParameters; i++)
        line += "rng(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);
}

int Generator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void Generator::returnFunc() {
    int varCount = currentScope.top().avaiableVarsID.size();
    int varPos = rand() % varCount;
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[varPos]];
    addLine("return " + var->name + ";");
}

void Generator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);

    int addedVars = currentScope.top().addedVars;
    for (int i = 0; i < addedVars; ++i) {
        auto it = variables.end();
        if (it != variables.begin()) {
            --it;
            if (it->second != nullptr)
                delete it->second;
            variables.erase(it);
        }
    }

    currentScope.pop();
    varCounter -= addedVars;
}

void Generator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void Generator::genMakefile(std::string dir, std::string target) {
    std::ofstream makefile;
    makefile.open(dir + "Makefile");
    makefile << "CC = gcc\n";
    makefile << "CFLAGS = \n";
    makefile << "TARGET = " + target + "\n";
    makefile << "SRC_DIR = src\n";
    makefile << "OBJ_DIR = obj\n\n";

    makefile << "SRC = $(wildcard $(SRC_DIR)/*.c)\n";
    makefile << "OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))\n\n";

    makefile << "$(TARGET)_$(CC): $(OBJ)\n";
    makefile << "\t$(CC) -o $(TARGET)_$(CC) $(OBJ)\n\n";

    makefile << "$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)\n";
    makefile << "\t$(CC) -c $< -o $@\n\n";

    makefile << "$(OBJ_DIR):\n";
    makefile << "\tmkdir -p $(OBJ_DIR)\n\n";

    makefile << "clean:\n";
    makefile << "\trm -f $(OBJ) $(TARGET)_$(CC)\n\n";

    makefile << "%.o: %.c\n";
}

void Generator::genBenchmark(std::string benchmarkName) {
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
            // RNG Function
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