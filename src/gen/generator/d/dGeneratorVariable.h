#ifndef DVARIABLEGENERATOR_H
#define DVARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

#include "../generatorVariable.h"

class DGeneratorArray : public GeneratorArray {
   public:
    int totalSize;

    DGeneratorArray() {}
    DGeneratorArray(int totalSize, int id);
    ~DGeneratorArray();

    std::vector<std::string> new_(bool inFunction = false) override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool shouldReturn = false) override;
    std::vector<std::string> free() override;
    std::vector<std::string> genIncludes() override;
    std::vector<std::string> genGlobalVars() override;
    std::vector<std::string> genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) override;
};

#endif
