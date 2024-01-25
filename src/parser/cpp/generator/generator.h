#ifndef GENERATOR_H
#define GENERATOR_H
#include <iostream>

#include "../shared/enums.h"
#include "../shared/typedefs.h"

class Generator {
   private:
    int forLevel = 0;
    vector<vector<string>*> currentScope;

    void generateIncludes();
    void generateMainFunction();
    void returnMainFunction();

   public:
    vector<string> includes;
    vector<string> mainFunction;
    vector<vector<string>> functions;

    Generator() {
        currentScope.push_back(&mainFunction);
        generateIncludes();
        generateMainFunction();
    }

    void generateIdCall(string);

    void generateAtrib(string);
    void generateAlloc(int);
    void generateFunc(int);
    void generateElse();
    void scopeEnd();

    void writeToFile(string);
};

#include "generator.cpp"

#endif