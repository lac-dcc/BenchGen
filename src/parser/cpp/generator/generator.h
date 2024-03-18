#ifndef GENERATOR_H
#define GENERATOR_H
#include <fstream>
#include <iostream>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class Generator {
   private:
    std::vector<std::string> includes;
    std::vector<std::string> mainFunction;
    std::list<std::vector<std::string>> functions;
    std::vector<std::vector<std::string>*> currentScope;

    void generateIncludes();
    void generateMainFunction();
    void returnMainFunction();

   public:
    Generator() {
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
