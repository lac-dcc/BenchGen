#ifndef ADAGENERATOR_H
#define ADAGENERATOR_H
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>

#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../../shared/consts.h"
#include "../generatorFunction.h"
#include "../generatorScope.h"
#include "../generatorVariable.h"
#include "../languageGenerator.h"

class AdaGenerator : public ProgrammingLanguageGenerator {
   private:
    std::vector<std::string> globalVars;        // shared type declarations (Bench_Types spec)
    std::vector<std::string> mainDeclarations;  // hoisted decls for the main procedure
    std::map<int, std::vector<std::string>> funcDeclarations;  // hoisted decls keyed by func id
    int paramCounter = 0;  // monotonic, gives each Params object a globally unique name

    void generateGlobalVars();
    void generateMainFunction();
    std::string createParams();
    void addDeclaration(const std::string& decl);

    void genTypesPackage(const std::string& dir);
    void genPathPackage(const std::string& dir);
    void genMainFile(const std::string& dir, const std::string& mainName);
    void genFuncFiles(const std::string& dir, const std::vector<int>& funcIds);
    void genMakefile(const std::string& dir, const std::string& target);
    void genReadme(const std::string& dir, const std::string& target);

   public:
    AdaGenerator(std::string variableType) {
        this->ifCounter.push(0);
        this->varCounter = 0;
        this->loopLevel = 0;
        this->loopCounter = 0;
        this->varType = variableType;
        currentScope.push(GeneratorScope(0));
        generateGlobalVars();
        generateMainFunction();
    }

    ~AdaGenerator() {
        for (auto& vpair : variables) {
            delete vpair.second;
        }
    }

    // Records a hoisted Array_T_Access declaration for the current subprogram.
    void addArrayDeclaration(const std::string& name);

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
