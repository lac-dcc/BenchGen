#ifndef C_GENERATOR_H
#define C_GENERATOR_H

#include "../../generator/generator.h"

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

    void visit(const Statement& s) override {
        s.stmt->accept(*this);
        s.code->accept(*this);
    }
    
    void visit(const Lambda&) override {
    }
    
    void visit(const Id&) override {
    }
    
    void visit(const New&) override {
        int id = addVar();
        std::vector<std::string> lines = variables[id]->new_(!(currentFunction.top()->insertBack));
        addLine(lines);
    }
   
    void visit(const Insert&) override {
        int varCount = currentScope.top().availableVarIDs.size();
        if (varCount == 0) return;

        int varPos = rand() % varCount;
        Variable* var = variables[currentScope.top().availableVarIDs[varPos]];
        std::vector<std::string> lines = var->insert();
        addLine(lines);
    }
    
    void visit(const Remove&) override {
        int varCount = currentScope.top().availableVarIDs.size();
        if (varCount == 0) return;

        int varPos = rand() % varCount;
        Variable* var = variables[currentScope.top().availableVarIDs[varPos]];
        std::vector<std::string> lines = var->remove();
        addLine(lines);
    }
    
    void visit(const Contains&) override {
        int varCount = currentScope.top().getVarCounter();
        if (varCount == 0) return;

        int varPos = rand() % varCount;
        Variable* var = variables[currentScope.top().availableVarIDs[varPos]];
        std::vector<std::string> lines = var->contains(!(currentFunction.top()->insertBack));
        addLine(lines);
    }
    
    void visit(const Loop& l) override {
        std::string loopVar = "loop" + std::to_string(loopCounter);
        std::string loopVarLine = "unsigned int " + loopVar + " = 0;";
        addLine(loopVarLine);

        std::string loopLimitVar = "loopLimit" + std::to_string(loopCounter);
        std::string loopLimitValue = "(rand()%loopsFactor)/" + std::to_string(loopLevel + 1) + " + 1";
        std::string loopLimitLine = "unsigned int " + loopLimitVar + " = " + loopLimitValue + ";";
        addLine(loopLimitLine);

        std::string forLine = "for(; " + loopVar + " < " + loopLimitVar + "; " + loopVar + "++) {";
        addLine(forLine);

        startScope();
        loopLevel++;
        loopCounter++;
        l.code->accept(*this);
        freeVars();
        endScope();
        loopLevel--;
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
                std::vector<std::string> lines = variables[id]->new_(!currentFunction.top()->insertBack);
                addLine(lines);
            }
            int varCount = currentScope.top().availableVarIDs.size();
            int returnVarPos = rand() % varCount;
            freeVars(true, returnVarPos);
            returnFunc(returnVarPos);
            endFunc();
            path_stack = aux;
        }
    }
    
    void visit(const Seq&) override {
    }
    
    void visit(const If& i) override {
        bool isMain = currentFunction.top()->insertBack;
        std::string bit = std::format("{:#x}", get_mask());

        std::string condition;

        if (isMain) {
            condition = "get_path() & " + bit;
        } else {
            int cnt = this->ifCounter.top();
            int pathNumber = std::ceil((cnt+1)/64.0) - 1; 
            condition = "PATH" + std::to_string(pathNumber) + " & " + bit;
        } 

        this->ifCounter.top()++;
        std::string line = "if(" + condition + ") {";
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
    
    void generateIncludes() override {
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
        includes.push_back("#ifdef COUNT");
        includes.push_back("    #define COUNT_INSERT() printf(\"insert\\n\")");
        includes.push_back("    #define COUNT_REMOVE() printf(\"remove\\n\")");
        includes.push_back("    #define COUNT_CONTAINS() printf(\"contains\\n\")");
        includes.push_back("#else");
        includes.push_back("    #define COUNT_INSERT()");
        includes.push_back("    #define COUNT_REMOVE()");
        includes.push_back("    #define COUNT_CONTAINS()");
        includes.push_back("#endif");
        vector<string> varIncludes = VarType::genIncludes();
        for (auto var : varIncludes)
            globalVars.push_back(var);
    }

    void generateMainFunction() override {
        mainFunction = Function(-1);
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

    string createParams() override {
        string name = "params" + std::to_string(currentScope.top().addParam());
        vector<Variable*> varsParams;
        for (int i = 0; i < (int)currentScope.top().availableVarIDs.size(); i++) {
            varsParams.push_back(variables[currentScope.top().availableVarIDs[i]]);
        }
        vector<string> params = VarType::genParams(name, varsParams);
        addLine(params);
        return name;
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
                funcSource = "func" + std::to_string(func.getId()) + ".c";
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

    void startFunc(int funcId, int nParams) override {
        path_stack_init();
        Function func = Function(funcId);
        string funcHeader = VarType::type + "* func" + std::to_string(funcId) + "(" + VarType::type + "_param* vars, ";
        for (int i = 0; i < nParams; i++) {
            funcHeader += "const unsigned long PATH" + std::to_string(i) + ", ";
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

    void callFunc(int funcId, int nParameters) {
        string param = "";
        param = createParams();

        int id = addVar();
        Variable* var = variables[id];
        string line = var->type + "* " + var->name + " = func" + std::to_string(funcId) + "(&" + param + ", ";

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

};

#endif
