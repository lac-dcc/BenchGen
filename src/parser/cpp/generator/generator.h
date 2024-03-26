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

    void addLine(std::string, int = 0);
    void startScope();
    void startFunc();
    int addVar();
    int getVars();
    void endScope();
    void endFunc();
    void writeToFile(std::string);
};

#endif
