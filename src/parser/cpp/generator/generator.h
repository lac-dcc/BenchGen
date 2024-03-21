#ifndef GENERATOR_H
#define GENERATOR_H
#include <fstream>
#include <iostream>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "generatorFunction.h"
#include "generatorScope.h"

class Generator {
   private:
    std::vector<std::string> includes;
    GeneratorFunction mainFunction;
    std::list<GeneratorFunction> functions;
    std::vector<GeneratorFunction*> currentFunction;
    std::vector<GeneratorScope> currentScope;

    void generateIncludes();
    void generateMainFunction();

   public:
    Generator();

    int loopCounter = 0;

    void addLine(std::string);
    void startNewScope();
    void startNewFunction();
    std::string addNewVariableToScope();
    void addVariableToScope(GeneratorVar);
    void scopeEnd();
    void functionEnd();
    void writeToFile(std::string);
};

#endif
