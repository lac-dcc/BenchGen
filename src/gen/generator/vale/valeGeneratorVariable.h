#ifndef VALEVARIABLEGENERATOR_H
#define VALEVARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

#include "../generatorVariable.h"

// Lowers the `array` variable type to Vale. A BenchArray wraps a runtime-sized
// mutable array (`[]<mut>int`). Vale's single-ownership model frees the array
// automatically when its owning reference drops, so there is no manual free or
// reference counting (free() is a no-op).
class ValeGeneratorArray : public GeneratorArray {
   public:
    int totalSize;

    ValeGeneratorArray() {}

    ValeGeneratorArray(int totalSize, int id);

    ~ValeGeneratorArray();

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
