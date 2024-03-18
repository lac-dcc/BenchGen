#ifndef GENERATOR_H
#define GENERATOR_H
#include <fstream>
#include <iostream>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "generatorScope.h"

class Generator {
   private:
    std::vector<std::string> includes;
    GeneratorScope mainFunction;
    std::list<GeneratorScope> functions;
    std::vector<GeneratorScope*> currentScope;

    void generateIncludes();
    void generateMainFunction();
    void returnMainFunction();

   public:
    Generator() {
        mainFunction = GeneratorScope();
        currentScope.push_back(&mainFunction);
        generateIncludes();
        generateMainFunction();
    }

    void generateIdCall(std::string);
    void generateInsert();
    void generateRemove();
    void generateDel();
    void generateNew();
    void generateContains();
    void generateIf();
    void generateLoop();
    void generateCall();
    void generateElse();
    void scopeEnd();
    void writeToFile(std::string);
};

#endif
