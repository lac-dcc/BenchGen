#ifndef ADAVARIABLEGENERATOR_H
#define ADAVARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

#include "../generatorVariable.h"

class AdaGeneratorArray : public GeneratorArray {
   public:
    int totalSize;

    AdaGeneratorArray() {}

    AdaGeneratorArray(int totalSize, int id);

    ~AdaGeneratorArray();

    // Returns the declaration line that must be hoisted into the enclosing
    // subprogram's declarative part (Ada forbids declarations among statements).
    std::string declaration();

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
