#ifndef VARIABLEGENERATOR_H
#define VARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "../shared/varTypes.h"

class GeneratorVariable {
   public:
    int id;
    std::string name;
    std::string typeString;
    virtual ~GeneratorVariable() {}

    virtual std::vector<std::string> new_(bool = false) = 0;
    virtual std::vector<std::string> insert() = 0;
    virtual std::vector<std::string> remove() = 0;
    virtual std::vector<std::string> contains(bool = false) = 0;
    virtual std::vector<std::string> free() = 0;

    virtual std::vector<std::string> genIncludes() = 0;
    virtual std::vector<std::string> genGlobalVars() = 0;
    virtual std::vector<std::string> genParams(std::string, std::vector<GeneratorVariable*>) = 0;
};

class Array : public GeneratorVariable {
   public:
    int totalSize;
    Array() {};
    Array(int totalSize, int* values, int id);
    ~Array();

    std::vector<std::string> new_(bool = false) override;
    std::vector<std::string> realloc();
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool = false) override;
    std::vector<std::string> free() override;

    std::vector<std::string> genIncludes() override;
    std::vector<std::string> genGlobalVars() override;
    std::vector<std::string> genParams(std::string, std::vector<GeneratorVariable*>) override;
};

class VariableFactory {
   public:
    static GeneratorVariable* createVariable(std::string type, int identifier);
};

#endif