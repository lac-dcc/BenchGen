#ifndef GENERATOR_H
#define GENERATOR_H
#include <filesystem>
#include <fstream>
#include <iostream>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "generatorFunction.h"
#include "generatorScope.h"
#include "generatorVariable.h"

class Generator {
   private:
    std::vector<std::string> includes;
    std::vector<std::string> globalVars;

    void generateIncludes();
    void generateGlobalVars();
    void generateMainFunction();
    void generateRandomNumberGenerator();
    std::string getVarTypeDeclaration();
    std::string createArrayParams();
    void freeArrayParams(std::string);
    void genMakefile(std::string dir, std::string target);

   public:
    GeneratorFunction mainFunction;
    std::list<GeneratorFunction> functions;
    std::stack<GeneratorFunction*> currentFunction;
    std::stack<int> ifCounter;
    int varCounter;
    int loopLevel;
    int loopCounter;
    std::string varType;
    std::map<int, GeneratorVariable*> variables;
    std::stack<GeneratorScope> currentScope;
    Generator(std::string variableType);
    ~Generator() {
        for (auto& vpair : variables) {
            delete vpair.second;
        }
    }
    void addLine(std::string, int = 0);
    void startScope();
    void startFunc(int, int);
    bool functionExists(int);
    void callFunc(int, int);
    int addVar(std::string);
    void returnFunc();
    void endScope();
    void endFunc();
    void genBenchmark(std::string);
};

#endif
