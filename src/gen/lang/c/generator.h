#ifndef C_GENERATOR_H
#define C_GENERATOR_H

#include "../../generator/generator.h"

using std::string;
using std::to_string;
using std::format;

template<typename VarType>
class CGenerator : public Generator<VarType> {
public:
    using Generator<VarType>::includes;
    using Generator<VarType>::globalVars;
    using Generator<VarType>::currentScope;
    using Generator<VarType>::variables;
    using Generator<VarType>::addLine;
    using Generator<VarType>::addVar;
    using Generator<VarType>::currentFunction;
    using Generator<VarType>::loopCounter;
    using Generator<VarType>::loopLevel;
    using Generator<VarType>::startScope;
    using Generator<VarType>::endScope;
    using Generator<VarType>::freeVars;
    using Generator<VarType>::functions;
    using Generator<VarType>::mainFunction;
    using Generator<VarType>::path_stack;
    using Generator<VarType>::functionExists;
    using Generator<VarType>::endFunc;
    using Generator<VarType>::path_stack_init;
    using Generator<VarType>::get_mask;
  
    void visit(const Loop& l) override {
        string loopVar = format("loop{}", loopCounter);
        addLine(format("unsigned int {} = 0;", loopVar));
    
        string loopLimitVar = format("loopLimit{}", loopCounter);
        string loopLimitValue = format("(rand()%loopsFactor)/{} + 1", loopLevel+1);
        addLine(format("unsigned int {} = {};", loopLimitVar, loopLimitValue));

        addLine(format("for (; {} < {}; {}++) {{", loopVar, loopLimitVar, loopVar));

        startScope();
        loopLevel++;
        loopCounter++;
        l.code->accept(*this);
        freeVars();
        endScope();
        loopLevel--;
    }
     
    void visit(const If& i) override {
        bool isMain = currentFunction.top()->isMainFunction;
        string bit = format("{:#x}", get_mask());

        string condition;

        if (isMain) {
            condition = "get_path() & " + bit;
        } else {
            int cnt = this->ifCounter.top();
            int pathNumber = std::ceil((cnt+1)/64.0) - 1; 
            condition = "PATH" + to_string(pathNumber) + " & " + bit;
        } 

        this->ifCounter.top()++;
        string line = "if(" + condition + ") {";
        addLine(line);

        path_stack.push(path_stack.top() + 1);
        
        startScope();
        i.c1->accept(*this);
        freeVars();
        endScope();

        int then_counter = path_stack.top();
        path_stack.pop();
        
        line = "else {";
        addLine(line);
        
        int else_counter = path_stack.top();
        
        startScope();

        i.c2->accept(*this);
        freeVars();
        endScope();

        path_stack.push(std::max(then_counter, else_counter)); 
    }
    
    void visit(const Call& c) override {
        int nParameters = std::ceil(c.conditionalCounts / 64.0);
        callFunc(c.id, nParameters);

        if (!functionExists(c.id)) {

            std::stack<int> aux = path_stack;
            startFunc(c.id, nParameters);
            c.code->accept(*this);
            if (currentScope.top().availableVarIDs.size() == 0) {
                int id = addVar();
                addLine(variables[id]->new_(!(currentFunction.top()->isMainFunction)));
            }
            int varCount = currentScope.top().availableVarIDs.size();
            int returnVarPos = rand() % varCount;
            freeVars(true, returnVarPos);
            returnFunc(returnVarPos);
            endFunc();
            path_stack = aux;
        }
    }
     
    void startFunc(int funcId, int nParams) override {
        path_stack_init();
        Function func = Function(funcId);
        string funcHeader = VarType::type + "* func" + to_string(funcId) + "(" + VarType::type + "_param* vars, ";
        for (int i = 0; i < nParams; i++) {
            funcHeader += "const unsigned long PATH" + to_string(i) + ", ";
        }
        funcHeader += "int loopsFactor";
        funcHeader += ") {";
        func.addLine(funcHeader);
        functions.push_back(func);
        currentFunction.push(&(functions.back()));
        Scope scope = Scope();
        currentScope.push(scope);
        this->ifCounter.push(0);
        addLine("size_t pCounter = vars->size;");
    }
    
    string createParams() override {
        string name = "params" + to_string(currentScope.top().addParam());
        vector<Variable*> varsParams;
        for (int i = 0; i < (int)currentScope.top().availableVarIDs.size(); i++) {
            varsParams.push_back(variables[currentScope.top().availableVarIDs[i]]);
        }
        addLine(VarType::genParams(name, varsParams));
        return name;
    }

    void callFunc(int funcId, int nParameters) {
        string param = createParams();

        int id = addVar();
        Variable* var = variables[id];
        string line = var->type + "* " + var->name + " = func" + to_string(funcId) + "(&" + param + ", ";

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

    void returnFunc(int returnVarPos) {
        Variable* var = variables[currentScope.top().availableVarIDs[returnVarPos]];
        addLine("return " + var->name + ";");
    }
    
    void generateMainFunction() override {
        mainFunction = Function(-1, true);
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
        mainFunction.setOffset(2);
        currentFunction.push(&mainFunction);
        startScope();
    }
    
    void generateIncludes() override {
        includes = R"(
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef DEBUG
    #define DEBUG_NEW(id) printf("[NEW]\t\tId %d created\n", id)
    #define DEBUG_COPY(id) printf("[COPY]\t\tId %d copied\n", id)
    #define DEBUG_RETURN(id) printf("[RETURN]\tId %d returned\n", id)
    #define DEBUG_FREE(id) printf("[FREE]\t\tId %d freed\n", id)
#else
    #define DEBUG_NEW(id)
    #define DEBUG_COPY(id)
    #define DEBUG_RETURN(id)
    #define DEBUG_FREE(id)
#endif
#ifdef COUNT
    #define COUNT_INSERT() printf("insert\n")
    #define COUNT_REMOVE() printf("remove\n")
    #define COUNT_CONTAINS() printf("contains\n")
#else
    #define COUNT_INSERT()
    #define COUNT_REMOVE()
    #define COUNT_CONTAINS()
#endif
)";
        globalVars = VarType::genIncludes();
    }

    void generateRandomNumberGenerator() override {
        Function rngFunction = Function(-1);
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
 
    void generateFiles(std::filesystem::path benchDir) override {
        std::filesystem::path sourceDir = benchDir / "src";
       
        string benchName = benchDir.filename();
        if (!benchDir.has_filename())
          benchName = benchDir.parent_path().filename();

        string sourceFile = benchName + ".c";
        string includeName = benchName + ".h";

        std::filesystem::create_directories(benchDir);
        std::filesystem::create_directories(sourceDir);

        std::ofstream file;
        file.open(sourceDir/sourceFile);

        std::ofstream includeFile;
        includeFile.open(sourceDir/includeName);

        // Includes
        includeFile << "#ifndef " + benchName + "\n";
        includeFile << "#define " + benchName + "\n";
        includeFile << includes << std::endl;
        file << "#include \"" << includeName << "\"";
        file << std::endl;

        // Global variables
        includeFile << globalVars << std::endl;

        // Headers
        for (auto func : functions) {
            string header = func.getLines()[0];
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
            string funcSource;
            if (func.getId() == -1) {
                funcSource = "path.c";
            } else {
                funcSource = "func" + to_string(func.getId()) + ".c";
            }
            std::ofstream funcFile;
            funcFile.open(sourceDir/funcSource);
            funcFile << "#include \"" << includeName << "\" \n";

            lines = func.getLines();
            for (auto line : lines) {
                funcFile << line << std::endl;
            }
            funcFile << std::endl;
            funcFile.close();
        }
        includeFile << "#endif";
        this->genMakefile(benchDir, benchName);
        this->genReadme(benchDir, benchName);
        includeFile.close();
        file.close();
    }

    void genMakefile(std::filesystem::path dir, string target) override {
        std::ofstream makefile;

        makefile.open(dir/"Makefile");
        makefile << "CC = clang\n";
        makefile << "LLVMFLAGS = -DDEBUG -S -emit-llvm\n";
        makefile << "TARGET = " + target + "\n";
        makefile << "SRC_DIR = src\n";
        makefile << "OBJ_DIR = obj\n";
        makefile << "LL_DIR = ll\n";
        makefile << "GLIB_CFLAGS = $(shell pkg-config --cflags glib-2.0)\n";
        makefile << "GLIB_LIBS = $(shell pkg-config --libs glib-2.0)\n\n";

        makefile << "SRC = $(wildcard $(SRC_DIR)/*.c)\n";
        makefile << "OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))\n";
        makefile << "LL = $(patsubst $(SRC_DIR)/%.c, $(LL_DIR)/%.ll, $(SRC))\n\n";

        makefile << "all: $(TARGET)\n\n";

        makefile << "$(TARGET): $(OBJ)\n";
      
        makefile << "\t$(CC) ${CFLAGS} $(OBJ) -o $(TARGET) $(GLIB_LIBS)\n\n";

        makefile << "$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)\n";
        makefile << "\t$(CC) ${CFLAGS} $(GLIB_CFLAGS) -c $< -o $@\n\n";

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

    void genReadme(std::filesystem::path dir, string target) override {
        std::ofstream readme;
        readme.open(dir/"README.md");
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
};

#endif
