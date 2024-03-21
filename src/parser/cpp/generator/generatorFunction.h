#ifndef GENERATORFUNCTION_H
#define GENERATORFUNCTION_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class GeneratorFunction {
   private:
    bool isMainFunction;
    std::vector<std::string> lines;

   public:
    GeneratorFunction(bool isMainFunction = false) : isMainFunction(isMainFunction) {}
    ~GeneratorFunction() = default;

    std::vector<std::string> getLines();
    void addLine(std::string);
};

#endif