#ifndef GENERATOR_H
#define GENERATOR_H
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

    GeneratorFunction mainFunction;
    std::list<GeneratorFunction> functions;
    std::stack<GeneratorFunction*> currentFunction;

    void generateIncludes();
    void generateMainFunction();

    int varCounter;

   public:
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
    void startFunc(int);
    bool functionExists(int);
    void callFunc(int);
    int addVar(std::string type);
    void endScope();
    void endFunc();
    void writeToFile(std::string);
};

#endif
