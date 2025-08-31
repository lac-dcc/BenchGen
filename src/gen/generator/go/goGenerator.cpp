#include "goGenerator.h"

void GoGenerator::generateIncludes() {
   
    std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
}

void GoGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void GoGenerator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({
        "func getPath() uint64 {",
        "   return 1",
        //"    path := os.Getenv(\"BENCH_PATH\")",
        //"    if path != \"\" {",
        //"        val, err := strconv.ParseUint(path, 10, 64)",
        //"        if err == nil {",
        //"            return val",
        //"        }",
        //"    }",
        //"    n := uint64(rand.Uint32())",
        //"    return (n << 32) | uint64(rand.Uint32())",
        "}",
    });
    functions.push_back(rngFunction);
}

void GoGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine({
    "package main",
    "",
    "import (",
    "    \"math/rand\"",
    "    \"os\"",
    "    \"strconv\"",
    ")",
    "",
    "func main() {",
    "    loopsFactor := 100",
    "    rand.Seed(0)",
    "",
    "    args := os.Args",
    "    for i := 1; i < len(args); i++ {",
    "        if args[i] == \"-path-seed\" {",
    "            i++",
    "            if i < len(args) {",
    "                seed, err := strconv.Atoi(args[i])",
    "                if err == nil {",
    "                    rand.Seed(int64(seed))",
    "                }",
    "            }",
    "        } else if args[i] == \"-loops-factor\" {",
    "            i++",
    "            if i < len(args) {",
    "                val, err := strconv.Atoi(args[i])",
    "                if err == nil {",
    "                    loopsFactor = val",
    "                }",
    "            }",
    "        }",
    "    }",
    "",
    "}",
    });
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void GoGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void GoGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void GoGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void GoGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = "func Func" + std::to_string(funcId) + "(vars *" +VariableFactory::genTypeString(varType) + "Param, ";
    
    for (int i = 0; i < nParameters; i++) {
        funcHeader += "PATH" + std::to_string(i) + " uint64 , ";
    }
    funcHeader += "loopsFactor int";
    funcHeader += ") *"+VariableFactory::genTypeString(varType)+"{";
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
    addLine("var pCounter int = vars.Size;");
    addLine("_ = pCounter");
}

bool GoGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string GoGenerator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < (int)currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void GoGenerator::callFunc(int funcId, int nParameters) {
    std::string param = "";
    param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = "var " + var->name + " *"+var->typeString +" = Func" + std::to_string(funcId) + "(&" + param + ", ";

    for (int i = 0; i < nParameters; i++)
        line += "getPath(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);

    //line = "DEBUG_RETURN(" + var->name + "->id);";

    line = param + ".Data = nil";
    addLine(line);
    line = param + ".Size = 0";
    addLine(line);
}

int GoGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void GoGenerator::freeVars(bool hasReturn, int returnVarPos) {

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

void GoGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void GoGenerator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void GoGenerator::endIfScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void GoGenerator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void GoGenerator::genMakefile(std::string dir, std::string target) {
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

void GoGenerator::genReadme(std::string dir, std::string target) {
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

void GoGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceFile = benchmarkName + ".go";
    std::string includeName = benchmarkName + "_head.go";
    std::string sourceDir = benchDir + "src/";

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    std::ofstream file;
    file.open(sourceDir + sourceFile);

    std::ofstream includeFile;
    includeFile.open(sourceDir + includeName);

    includeFile << "package main" << std::endl;

    for (auto include : includes) {
        includeFile << include << std::endl;
    }

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
            funcSource = "path.go";
        } else {
            funcSource = "func" + std::to_string(func.getId()) + ".go";
        }
        std::ofstream funcFile;
        funcFile.open(sourceDir + funcSource);

        funcFile << "package main" << std::endl;
        
        funcFile << "import \"math/rand\"" << std::endl;

        //if(funcSource == "path.go"){
        //    funcFile << "import \"os\"" << std::endl;
        //    funcFile << "import \"strconv\"" << std::endl;
        //}

        funcFile <<  "var _ = rand.Intn" << std::endl;
        


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