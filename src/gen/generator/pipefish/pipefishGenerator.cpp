#include "pipefishGenerator.h"

std::vector<std::string> varGlobalVars = {};

void PipefishGenerator::generateIncludes() {
    //includes.push_back("global DEBUG = true");
    //includes.push_back("");
    //includes.push_back("cmd debug_new(id int) :");
    //includes.push_back("    if DEBUG : oia \"[NEW]\t\tId \" + string(id) + \" created\"");
    //includes.push_back("");
    //includes.push_back("cmd debug_copy(id int) :");
    //includes.push_back("    if DEBUG : oia \"[COPY]\t\tId \" + string(id) + \" copied\"");
    //includes.push_back("");
    //includes.push_back("cmd debug_return(id int) :");
    //includes.push_back("    if DEBUG : oia \"[RETURN]\tId \" + string(id) + \" returned\"");
    //includes.push_back("");
    //includes.push_back("cmd debug_free(id int) :");
    //includes.push_back("    if DEBUG : oia \"[FREE]\t\tId \" + string(id) + \" freed\"");
    //std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    //for (auto var : varIncludes) {
    //    globalVars.push_back(var);
    //}
}

void PipefishGenerator::generateGlobalVars() {
    varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void PipefishGenerator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);

    //"    let path = env \"BENCH_PATH\"",
    //"    if path != \"\" :",
    //"        return int(path)",
    //"    else :",
    //"        let hi = benchgen_rand()",
    //"        let lo = benchgen_rand()",
    //"        return (hi << 32) | lo",
    //"    // end if",
    //""

    functions.push_back(rngFunction);
}

void PipefishGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    //mainFunction.addLine({
    //"global benchgen_state = 1",
    //"",
    //"cmd benchgen_srand(seed int) :",
    //"    benchgen_state = seed",
    //"",
    //"cmd benchgen_rand() -> int :",
    //"    // Multiplicação e soma simulando o overflow de 64 bits do LCG",
    //"    benchgen_state = (6364136223846793005 * benchgen_state + 1) % 18446744073709551616",
    //"    return benchgen_state >> 32",
    //""
    //});
    mainFunction.addLine({"cmd main :",
                      "",
                      "",
                    });
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void PipefishGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void PipefishGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void PipefishGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void PipefishGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = "def func_" + std::to_string(funcId) + "(vars list";
    
    for (int i = 0; i < nParameters; i++) {
        funcHeader += ",path_" + std::to_string(i) + "";
    }
    funcHeader += ") -> Array :";
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
}

bool PipefishGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string PipefishGenerator::createParams() {
    std::string name = "";
    return name;
}

void PipefishGenerator::callFunc(int funcId, int nParameters) {
    //line = "DEBUG_RETURN(" + var->name + "->id);";
    //addLine(line);
//
    //line = "free(" + param + ".data);";
    //addLine(line);
}

int PipefishGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void PipefishGenerator::freeVars(bool hasReturn, int returnVarPos) {

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

void PipefishGenerator::returnFunc(int returnVarPos) {
}

void PipefishGenerator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void PipefishGenerator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void PipefishGenerator::genMakefile(std::string dir, std::string target) {
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

void PipefishGenerator::genReadme(std::string dir, std::string target) {
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

void cleanVector(std::vector<std::string>& vec) {
    vec.erase(
        std::remove_if(vec.begin(), vec.end(), [](const std::string& s) {
            return s.find_first_not_of(" \t\n\r") == std::string::npos;
        }), 
        vec.end()
    );
}

void PipefishGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceFile = benchmarkName + ".pf";
    std::string sourceDir = benchDir + "src/";

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    std::ofstream file;
    file.open(sourceDir + sourceFile);

    int size = (int)rand()%100;
    int id   = (int)rand()%100;

    std::vector<std::string> second_header = { "initialize(vars list) -> Array :",
                                    "    len(vars) > 0 :",
                                    "        lastArray with refC::(1 + lastArray[refC])",
                                    "    else :",
                                    "        Array(newdata,"+std::to_string(size)+", 1,"+std::to_string(id)+")",
                                    "given :",
                                    "    lastArray = vars[len(vars)-1]",
                                    "    newdata = from a = [] for i::_ = range 211 :",
                                    "        a & 0",
                                    "\n",
                                    "increment(A Array) -> Array :",
                                    "    from R = A for i::v = range A[data] :",
                                    "        R with [data, i]::v+1",
                                    "\n",
                                    "contains(A Array) -> bool :",
                                    "    from a = false for _::v = range A[data] :",
                                    "        v == 29 :",
                                    "            break true",
                                    "        else :",
                                    "            continue",
                                    "\n",
                                    "decrement(A Array) -> Array :",
                                    "    from R = A for i::v = range A[data] :",
                                    "        R with [data, i]::v-1\n",
                                    "free(A Array) -> Array :",
                                    "    A"};
    
    std::vector<std::string> first_header = { "newtype\n"
                                    "Array = struct(data list, size, refC, id int)\n"};
    

    std::vector<int> func_ids = {};

    for (auto header_line : first_header) {
        file << header_line << std::endl;
    }

    bool has_path = false;

    for (auto func : functions) {
        std::vector<std::string> lines = func.getLines();
        
        if(func.getId() != -1){
            func_ids.push_back(func.getId());
        }

        if(lines.size() > 0){
            
            if(lines[0].find("path_") != std::string::npos){
                has_path = true;
            }

            file << "\n" << lines[0] << std::endl;
            std::vector<std::string> new_lines = std::vector<std::string>(lines.begin() + 1, lines.end());

            if(new_lines[0].find("==") != std::string::npos){
                file << "    vars -> initialize ";
            }else{
                file << "    vars -> initialize ->  ";
            }
            
            cleanVector(new_lines);

            for (int i = 0; i < new_lines.size(); i++) {
               
               if (new_lines[i].find("contains") != std::string::npos || new_lines[i].find("increment") != std::string::npos || new_lines[i].find("decrement") != std::string::npos || new_lines[i].find("initialize") != std::string::npos){
                    std::cout << new_lines[i] << "\n";
                    if(((i+1) < new_lines.size()) && ((new_lines[i+1].find("else") != std::string::npos) || (new_lines[i+1].find("==") != std::string::npos))){
                        file << new_lines[i] << "\n";  
                    }else{
                        file << new_lines[i] << " -> ";
                    }
                }else if(new_lines[i].find("==") != std::string::npos || new_lines[i].find("else") != std::string::npos){
                    file << "\n " << new_lines[i] << "\n";                    
               }
                
            }
            if(func.getId() >= 0) file << " free";
            
        }
    }

    file << std::endl;
    file << "\n";

    for (auto header_line : second_header) {
        file << header_line << std::endl;
    }

    auto lines = mainFunction.getLines();
    for (auto line : lines) {
        file << line << std::endl;
    }

    for (auto func_id : func_ids) {
        std::string param = "";
        param = createParams();
    
        int id = addVar(varType);
        GeneratorVariable* var = variables[id];
        std::stringstream ss;
        int n = (int)(rand()%10);
        ss << "[";
    
        for (int i = 0; i < n; ++i) {
            int array_size = std::rand() % 10;
            int id = std::rand() % 100;
        
            ss << "Array([";
        
            for (int j = 0; j < array_size; ++j) {
                ss << (std::rand() % 1000);
                if (j < array_size - 1) ss << ",";
            }
        
            ss << "]," << array_size 
               << ", 1," << id << ")";
        
            if (i < n - 1) ss << ", ";
        }
    
        ss << "]";
    
        std::string arrlist = ss.str();
        int path = (int)(rand()%100);

        std::string line = "";
        if(has_path){
            line = "    post func_" + std::to_string(func_id) + "("+arrlist+","+std::to_string(path)+")\n";
        }else{
            line = "    post func_" + std::to_string(func_id) + "("+arrlist+")\n";
        }
        file << line;
    }

    this->genMakefile(benchDir, benchmarkName);
    this->genReadme(benchDir, benchmarkName);
    file.close();
}
