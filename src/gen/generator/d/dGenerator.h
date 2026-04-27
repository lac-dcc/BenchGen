#ifndef DGENERATOR_H
#define DGENERATOR_H
#include <filesystem>
#include <fstream>
#include <iostream>

#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../../shared/consts.h"
#include "../generatorFunction.h"
#include "../generatorScope.h"
#include "../generatorVariable.h"
#include "../languageGenerator.h"

class DGenerator : public ProgrammingLanguageGenerator {
   private:
    std::vector<std::string> includes;
    std::vector<std::string> globalVars;

    void generateIncludes();
    void generateGlobalVars();
    void generateMainFunction();
    void generateRandomNumberGenerator();
    std::string createParams();
    void genMakefile(std::string dir, std::string target);
    void genReadme(std::string dir, std::string target);

   public:
    DGenerator(std::string variableType) {
        this->ifCounter.push(0);
        this->varCounter = 0;
        this->loopLevel = 0;
        this->loopCounter = 0;
        this->varType = variableType;
        currentScope.push(GeneratorScope(0));
        generateIncludes();
        generateGlobalVars();
        generateRandomNumberGenerator();
        generateMainFunction();
    }

    ~DGenerator() {
        for (auto& vpair : variables) {
            delete vpair.second;
        }
    }

    void addLine(std::string, int = 0) override;
    void addLine(std::vector<std::string>, int = 0) override;
    void startScope() override;
    void startFunc(int, int) override;
    bool functionExists(int) override;
    void callFunc(int, int) override;
    int addVar(std::string) override;
    void freeVars(bool = false, int = 0) override;
    void returnFunc(int) override;
    void endScope() override;
    void endFunc() override;
    void generateFiles(std::string) override;
};

#endif
