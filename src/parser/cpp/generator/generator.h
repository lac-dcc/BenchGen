#ifndef GENERATOR_H
#define GENERATOR_H
#include <iostream>

#include "../shared/enums.h"
#include "../shared/typedefs.h"

using std::ofstream;

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
    void generateDeclaration(std::string);
    void generateAlloc(int);
    void generateFunc(int);
    void generateElse();
    void scopeEnd();
    void writeToFile(std::string);
};

#include "generator.cpp"

#endif
