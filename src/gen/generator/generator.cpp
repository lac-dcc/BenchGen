#include "generator.h"

/**
 * @brief Constructs a Generator object with initial settings.
 *
 * Initializes various counters, sets the variable type, and prepares the initial scope.
 * Generates necessary includes, global variables, random number generator, and the main function.
 *
 * @param variableType The type of variable to be used in code generation.
 */
Generator::Generator(std::string variableType) {
    this->ifCounter.push(0);               // Initialize if statement counter
    this->varCounter = 0;                  // Initialize variable counter
    this->loopLevel = 0;                   // Initialize loop nesting level
    this->loopCounter = 0;                 // Initialize loop counter
    this->varType = variableType;          // Set the variable type for generation
    currentScope.push(GeneratorScope(0));  // Start with the global scope
    generateIncludes();
    generateGlobalVars();
    generateRandomNumberGenerator();
    generateMainFunction();
}

/**
 * @brief Generates the necessary include statements for the generated code.
 *
 * Adds standard and variable-specific include directives to the list of includes.
 */
void Generator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    GeneratorVariable* var = varObject();
    std::vector<std::string> varIncludes = var->genIncludes();
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
    delete var;
}

/**
 * @brief Generates global variables needed for the generated code.
 *
 * Calls variable-specific methods to generate and add global variable declarations.
 */
void Generator::generateGlobalVars() {
    GeneratorVariable* var = varObject();
    std::vector<std::string> varGlobalVars = var->genGlobalVars();
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
    delete var;
}

/**
 * @brief Generates a random number generator function.
 *
 * Creates a function that returns a 64-bit random number by combining two 32-bit random numbers.
 */
void Generator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({"unsigned long rng() {",
                         "   unsigned long n = rand();",
                         "   return (n << 32) | rand();",
                         "}"});
    functions.push_back(rngFunction);
}

/**
 * @brief Generates the main function for the generated code.
 *
 * Initializes the main function with argument handling, setting up the random seed,
 * and loop factor initialization.
 */
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

/**
 * @brief Creates a variable object based on the specified type.
 *
 * Uses the VariableFactory to create and return a variable object.
 *
 * @return A pointer to the created GeneratorVariable object.
 */
GeneratorVariable* Generator::varObject() {
    return VariableFactory::createVariable(varType, 0);
}

/**
 * @brief Adds a line of code to the current function with indentation.
 *
 * The line is indented based on the current scope's indentation level.
 *
 * @param line The line of code to add.
 * @param d Additional depth for indentation.
 */
void Generator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

/**
 * @brief Adds multiple lines of code to the current function with indentation.
 *
 * Each line is indented based on the current scope's indentation level.
 *
 * @param lines A vector of lines of code to add.
 * @param d Additional depth for indentation.
 */
void Generator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

/**
 * @brief Starts a new scope for variable declarations.
 *
 * Pushes a new GeneratorScope onto the scope stack, inheriting the current scope's variables and indentation.
 */
void Generator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

/**
 * @brief Starts the definition of a new function.
 *
 * Creates a function header with specified parameters and starts a new scope for the function body.
 *
 * @param funcId The ID of the function to create.
 * @param nParameters The number of parameters the function takes.
 */
void Generator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    GeneratorVariable* var = varObject();
    std::string funcHeader = var->typeString + " func" + std::to_string(funcId) + "(" + var->typeString + "Param* vars, ";
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
    delete var;
}

/**
 * @brief Checks if a function with a given ID already exists.
 *
 * Iterates through the list of functions to see if a function with the specified ID is present.
 *
 * @param funcId The ID of the function to check.
 * @return True if the function exists, false otherwise.
 */
bool Generator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

/**
 * @brief Creates a parameter object to pass into a function.
 *
 * Generates the parameter name, creates the parameter object, and adds the necessary code lines.
 *
 * @return The name of the created parameter object.
 */
std::string Generator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    GeneratorVariable* var = varObject();
    std::vector<std::string> params = var->genParams(name, varsParams);
    addLine(params);
    delete var;
    return name;
}

/**
 * @brief Calls a function with the specified ID and parameters.
 *
 * Generates the necessary code to call a function, passing parameters and handling the return value.
 *
 * @param funcId The ID of the function to call.
 * @param nParameters The number of parameters to pass to the function.
 */
void Generator::callFunc(int funcId, int nParameters) {
    std::string param = "";
    param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = var->typeString + " " + var->name + " = func" + std::to_string(funcId) + "(&" + param + ", ";

    for (int i = 0; i < nParameters; i++)
        line += "rng(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);
}

/**
 * @brief Adds a new variable of the specified type to the current scope.
 *
 * Creates a new variable, adds it to the list of variables, and returns its ID.
 *
 * @param type The type of variable to create.
 * @return The ID of the newly created variable.
 */
int Generator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

/**
 * @brief Frees variables in the current scope.
 *
 * Frees all variables added in the current scope, except the return variable if specified.
 *
 * @param hasReturn Specifies whether there is a return variable.
 * @param returnVarPos The position of the return variable to keep.
 */
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

/**
 * @brief Returns a value from a function.
 *
 * Adds a return statement to the function, returning the specified variable.
 *
 * @param returnVarPos The position of the variable to return.
 */
void Generator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

/**
 * @brief Ends the current scope.
 *
 * Pops the current scope from the stack and adds a closing brace to the code.
 */
void Generator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

/**
 * @brief Ends the current function.
 *
 * Ends the current function scope, pops the function and the if counter from the stack.
 */
void Generator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

/**
 * @brief Generates a Makefile for the benchmark.
 *
 * Creates a Makefile with rules for compiling the generated source files.
 *
 * @param dir The directory where the Makefile should be created.
 * @param target The target executable name.
 */
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
    makefile << "\t$(CC) ${CFLAGS} -o $(TARGET)_$(CC) $(OBJ)\n\n";

    makefile << "$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)\n";
    makefile << "\t$(CC) ${CFLAGS} -c $< -o $@\n\n";

    makefile << "$(OBJ_DIR):\n";
    makefile << "\tmkdir -p $(OBJ_DIR)\n\n";

    makefile << "clean:\n";
    makefile << "\trm -f $(OBJ) $(TARGET)_$(CC)\n\n";

    makefile << "%.o: %.c\n";
}

/**
 * @brief Generates source and header files for the benchmark.
 *
 * Creates the necessary directory structure and writes the generated code to files.
 *
 * @param benchmarkName The name of the benchmark to generate files for.
 */
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
