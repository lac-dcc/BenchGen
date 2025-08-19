#include "rustGenerator.h"

RustGenerator::RustGenerator(std::string variableType) {
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

void RustGenerator::generateIncludes() {
    includes.push_back("use std::ffi::CString;");
    includes.push_back("use std::os::raw::c_char;\n\n");
    includes.push_back("#[cfg(debug_assertions)]");
    includes.push_back("macro_rules! debug_new {");
    includes.push_back("    ($id:expr) => {");
    includes.push_back("        println!(\"[NEW]\t\tId {} created\", $id);");
    includes.push_back("    };");
    includes.push_back("}\n");
    includes.push_back("#[cfg(not(debug_assertions))]");
    includes.push_back("macro_rules! debug_new {");
    includes.push_back("    ($id:expr) => {};\n");
    includes.push_back("#[cfg(debug_assertions)]");
    includes.push_back("macro_rules! debug_copy {\n");
    includes.push_back("    ($id:expr) => {\n");
    includes.push_back("        println!(\"[COPY]\t\tId {} copied\", $id);\n");
    includes.push_back("    };\n");
    includes.push_back("}\n");
    includes.push_back("#[cfg(not(debug_assertions))]");
    includes.push_back("macro_rules! debug_copy {\n");
    includes.push_back("    ($id:expr) => {};\n");
    includes.push_back("}\n");
    includes.push_back("#[cfg(debug_assertions)]");
    includes.push_back("macro_rules! debug_return {");
    includes.push_back("    ($id:expr) => {");
    includes.push_back("        println!(\"[RETURN]\tId {} returned\", $id);");
    includes.push_back("    };\n");
    includes.push_back("#[cfg(not(debug_assertions))]");
    includes.push_back("macro_rules! debug_return {");
    includes.push_back("    ($id:expr) => {};");
    includes.push_back("}\n");
    includes.push_back("#[cfg(debug_assertions)]");
    includes.push_back("macro_rules! debug_free {");
    includes.push_back("    ($id:expr) => {");
    includes.push_back("        println!(\"[FREE]\t\tId {} freed\", $id);");
    includes.push_back("    };");
    includes.push_back("}\n");
    includes.push_back("#[cfg(not(debug_assertions))]\n");
    includes.push_back("macro_rules! debug_free {\n");
    includes.push_back("    ($id:expr) => {};\n");
    includes.push_back("}\n");
    std::vector<std::string> varIncludes = VariableFactory::genIncludes(varType);
    for (auto var : varIncludes) {
        globalVars.push_back(var);
    }
}

void RustGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void RustGenerator::generateRandomNumberGenerator() {
    GeneratorFunction rngFunction = GeneratorFunction(-1);
    rngFunction.addLine({"use std::env;",
                     "use rand::Rng;\n",
                     "fn get_path() -> u64 {",
                     "    if let Ok(path) = env::var(\"BENCH_PATH\") {",
                     "        if let Ok(num) = path.parse::<u64>() {",
                     "            return num;",
                     "        }",
                     "    }",
                     "    let mut rng = rand::thread_rng();",
                     "    rng.gen::<u64>()",
                    "}"});

    functions.push_back(rngFunction);
}

void RustGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    mainFunction.addLine({"use std::env;\n",
                          "fn main() {",
                          "    let mut loops_factor = 100;",
                          "    let mut rng_seed: Option<u64> = Some(0);\n",
                          "    let args: Vec<String> = env::args().collect();",
                          "    let mut i = 1;",
                          "    while i < args.len() {",
                          "        match args[i].as_str() {",
                          "            \"-path-seed\" => {",
                          "                 i += 1;",
                          "                if i < args.len() {",
                          "                    if let Ok(seed) = args[i].parse::<u64>() {",
                          "                        rng_seed = Some(seed);",
                          "                    }",
                          "                }",
                          "            }",
                          "            \"-loops-factor\" => {",
                          "                i += 1;",
                          "                if i < args.len() {",
                          "                    if let Ok(val) = args[i].parse::<i32>() {",
                          "                        loops_factor = val;",
                          "                    }",
                          "                }",
                          "            }",
                          "            _ => {}",
                          "        }",
                          "        i += 1;",
                          "    }",
                          "\n",
                          "}"});
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void RustGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void RustGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void RustGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void RustGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = "fn func" + std::to_string(funcId) + "(vars: "+VariableFactory::genTypeString(varType) + "_param, ";
    
    for (int i = 0; i < nParameters; i++) {
        funcHeader += "PATH" + std::to_string(i) + ": u64, ";
    }
    funcHeader += "loopsFactor: i32";
    funcHeader += ") -> "+ VariableFactory::genTypeString(varType) +" {";
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
    addLine("let pCounter = vars.size;");
}

bool RustGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string RustGenerator::createParams() {
    std::string name = "params" + std::to_string(currentScope.top().addParam());
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < (int)currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void RustGenerator::callFunc(int funcId, int nParameters) {
    std::string param = "";
    param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    std::string line = "let " + var->name + " = func" + std::to_string(funcId) + "(" + param + ", ";

    for (int i = 0; i < nParameters; i++)
        line += "get_path(), ";
    line += "loopsFactor";
    line += ");";
    addLine(line);

    line = "debug_return(" + var->name + ".id);";
    addLine(line);
}

int RustGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void RustGenerator::freeVars(bool hasReturn, int returnVarPos) {
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

void RustGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void RustGenerator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);
    currentScope.pop();
}

void RustGenerator::endFunc() {
    endScope();
    currentFunction.pop();
    ifCounter.pop();
}

void RustGenerator::genMakefile(std::string dir, std::string target) {
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

void RustGenerator::genReadme(std::string dir, std::string target) {
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

void RustGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceFile = benchmarkName + ".rs";
    std::string includeName = benchmarkName + "_head.rs";
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
    file << "use crate::" << includeName;
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
            funcSource = "path.rs";
        } else {
            funcSource = "func" + std::to_string(func.getId()) + ".rs";
        }
        std::ofstream funcFile;
        funcFile.open(sourceDir + funcSource);
        funcFile << "use crate::" << includeName << "\n";

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
