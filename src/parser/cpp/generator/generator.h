#ifndef GENERATOR_H
#define GENERATOR_H
#include <fstream>
#include <iostream>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "generatorFunction.h"
#include "generatorScope.h"
#include "variableGenerator.h"

class Generator {
   private:
    std::vector<std::string> includes;

    GeneratorFunction mainFunction;
    std::list<GeneratorFunction> functions;
    std::vector<GeneratorFunction*> currentFunction;

    void generateIncludes();
    void generateMainFunction();

    int varCounter;

   public:
    std::map<int, Variable*> variables;
    std::vector<GeneratorScope> currentScope;
    Generator(std::string variableType);
    ~Generator() {
        for (auto& vpair : variables) {
            delete vpair.second;
        }
    }
    std::string varType;
    void addLine(std::string, int = 0);
    void startScope();
    void startFunc(int);
    bool functionExists(int);
    void callFunc(int);
    int addVar(std::string type);
    // int getVars();
    void endScope();
    void endFunc();
    void writeToFile(std::string);
};

#endif
