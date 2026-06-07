#ifndef VALEGENERATOR_H
#define VALEGENERATOR_H
#include <filesystem>
#include <fstream>
#include <iostream>
#include <vector>

#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../../shared/consts.h"
#include "../generatorFunction.h"
#include "../generatorScope.h"
#include "../generatorVariable.h"
#include "../languageGenerator.h"

// Lowers the language-agnostic AST to Vale. Each generated function is emitted to
// its own file (func<id>.vale), `main` to main.vale, and the shared struct/helper
// declarations to bench_types.vale; together they form a single Vale module that
// valec compiles directly (no headers, no forward declarations).
//
// Memory is handled by Vale's single-ownership model: an owned BenchArray is freed
// automatically when its reference drops, so freeVars() emits nothing. A pseudo
// random `Rng` is threaded by borrow reference (`&Rng`) through every function and
// drives the if-conditions.
class ValeGenerator : public ProgrammingLanguageGenerator {
   private:
    std::vector<std::string> globalVars;  // shared struct/helper declarations (bench_types.vale)

    void generateGlobalVars();
    void generateMainFunction();

    void genTypesFile(const std::string& dir);
    void genFuncFiles(const std::string& dir);
    void genMainFile(const std::string& dir);
    void genMakefile(const std::string& dir, const std::string& target);
    void genReadme(const std::string& dir, const std::string& target);

   public:
    ValeGenerator(std::string variableType) {
        this->ifCounter.push(0);
        this->varCounter = 0;
        this->loopLevel = 0;
        this->loopCounter = 0;
        this->varType = variableType;
        currentScope.push(GeneratorScope(0));
        generateGlobalVars();
        generateMainFunction();
    }

    ~ValeGenerator() {
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
    void endIfScope() override;
    void generateFiles(std::string) override;
};

#endif
