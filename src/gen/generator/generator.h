#ifndef GENERATOR_H
#define GENERATOR_H
#include <filesystem>
#include <fstream>
#include <iostream>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "../shared/varTypes.h"
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
    GeneratorVariable* varObject();
    std::string createParams();
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
    void addLine(std::vector<std::string>, int = 0);
    void startScope();
    void startFunc(int, int);
    bool functionExists(int);
    void callFunc(int, int);
    int addVar(std::string);
    void freeVars(bool = false, int = 0);
    void returnFunc(int);
    void endScope();
    void endFunc();
    void genBenchmark(std::string);
};

#endif
