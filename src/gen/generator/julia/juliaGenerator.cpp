#include "juliaGenerator.h"

std::vector<std::string> funcs = {};

JuliaGenerator::JuliaGenerator(std::string variableType) {
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

void JuliaGenerator::generateIncludes() {
    
    std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
}

void JuliaGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void JuliaGenerator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({"function get_path()::UInt64",
                         "   path = get(ENV, \"BENCH_PATH\", nothing)",
                         "   if path !== nothing",
                         "       return parse(UInt64, path)",
                         "   else",
                         "       n = rand(UInt32)",
                         "       return (UInt64(n) << 32) | UInt64(rand(UInt32))",
                         "   end",
                         "end"});

    functions.push_back(rngFunction);
}

void JuliaGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine({"function main()",
                          "   loopsFactor = 100",
                          "   Random.seed!(0)",
                          "   i = 1",
                          "   while i <= length(ARGS)",
                          "       if ARGS[i] == \"-path-seed\"",
                          "           i += 1",
                          "           if i <= length(ARGS)",
                          "               Random.seed!(parse(Int, ARGS[i]))",
                          "           end",
                          "       elseif ARGS[i] == \"-loops-factor\"",
                          "           i += 1",
                          "           if i <= length(ARGS)",
                          "               loopsFactor = parse(Int, ARGS[i])",
                          "           end",
                          "       end",
                          "       i += 1",
                          "   end",
                          "end",
                          "main()",});
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void JuliaGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void JuliaGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void JuliaGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void JuliaGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = "function func" + std::to_string(funcId) + "(vars::"+VariableFactory::genTypeString(varType) + "_param, ";
    
    for (int i = 0; i < nParameters; i++) {
        funcHeader += "PATH" + std::to_string(i) + "::UInt64, ";
    }
    funcHeader += "loopsFactor::Int";
    funcHeader += ")::"+VariableFactory::genTypeString(varType);
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
    addLine("pCounter = length(vars.data)");
}

bool JuliaGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string JuliaGenerator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < (int)currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void JuliaGenerator::callFunc(int funcId, int nParameters) {
    std::string param = "";
    param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = var->name + " = func" + std::to_string(funcId) + "(" + param + ", ";
    funcs.push_back("func" + std::to_string(funcId)+".jl");

    for (int i = 0; i < nParameters; i++)
        line += "get_path(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);

   // line = "debug_return(" + var->name + ".id);";
   // addLine(line);
}

int JuliaGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void JuliaGenerator::freeVars(bool hasReturn, int returnVarPos) {
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

void JuliaGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void JuliaGenerator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "end";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void JuliaGenerator::endIfScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void JuliaGenerator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void JuliaGenerator::genMakefile(std::string dir, std::string target) {
    std::ofstream makefile;

    makefile.open(dir + "Makefile");
    makefile << "RUSTC=rustc\n";
    makefile << "LLVMFLAGS = -DDEBUG -S -emit-llvm\n";
    makefile << "TARGET = " + target + "\n";
    makefile << "SRC_DIR = src\n";
    makefile << "OBJ_DIR = obj\n";
    makefile << "LL_DIR = ll\n\n";

    makefile << "SRC = $(wildcard $(SRC_DIR)/*.rs)\n";
    makefile << "OBJ = $(patsubst $(SRC_DIR)/%.rs, $(OBJ_DIR)/%.o, $(SRC))\n";
    makefile << "LL = $(patsubst $(SRC_DIR)/%.rs, $(LL_DIR)/%.ll, $(SRC))\n\n";

    makefile << "all: $(TARGET)\n\n";

    makefile << "$(TARGET): $(OBJ)\n";
    makefile << "\t$(RUSTC) $(OBJ) -o $(TARGET) \n\n";

    makefile << "$(OBJ_DIR)/%.o: $(SRC_DIR)/%.rs | $(OBJ_DIR)\n";
    makefile << "\t$(RUSTC) ${CFLAGS} -c $< -o $@\n\n";

    makefile << "$(LL_DIR)/%.ll: $(SRC_DIR)/%.rs | $(LL_DIR)\n";
    makefile << "\t$(RUSTC) ${LLVMFLAGS} $< -o $@\n\n";

    makefile << "$(OBJ_DIR) $(LL_DIR):\n";
    makefile << "\tmkdir -p $@\n\n";

    makefile << "llvm: $(LL)\n";
    makefile << "\t$(RUSTC) ./ll/*.ll -o llvm_${TARGET}\n\n";

    makefile << "clean:\n";
    makefile << "\trm -f $(OBJ) $(LL) $(TARGET) llvm_${TARGET}\n";
    makefile << "\trm -rf $(OBJ_DIR) $(LL_DIR)\n\n";
}

void JuliaGenerator::genReadme(std::string dir, std::string target) {
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

void JuliaGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceFile = benchmarkName + ".jl";
    std::string includeName = benchmarkName + "_head.jl";
    std::string sourceDir = benchDir + "src/";

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    std::ofstream file;
    file.open(sourceDir + sourceFile);

    std::ofstream includeFile;
    includeFile.open(sourceDir + includeName);

    for (auto include : includes) {
        includeFile << include << std::endl;
    }

    for(auto func : funcs)
    {
        file << "include(\"" << func << "\")\n";
    }

    file << "include(\"" << includeName << "\")\n";
    file << "include(\"" << "path.jl" << "\")\n";
    file << std::endl;

    // Global variables
    for (auto var : globalVars) {
        includeFile << var << std::endl;
    }
    includeFile << std::endl;

    // Headers
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
            funcSource = "path.jl";
        } else {
            funcSource = "func" + std::to_string(func.getId()) + ".jl";
        }
        std::ofstream funcFile;
        funcFile.open(sourceDir + funcSource);

        funcFile << "include(\"" << includeName << "\")\n";

        lines = func.getLines();
        for (auto line : lines) {
            funcFile << line << std::endl;
        }
        funcFile << std::endl;
        funcFile.close();
    }
    this->genMakefile(benchDir, benchmarkName);
    this->genReadme(benchDir, benchmarkName);
    includeFile.close();
    file.close();
}
