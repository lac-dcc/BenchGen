#ifndef GENERATORFUNCTION_H
#define GENERATORFUNCTION_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class GeneratorFunction {
   private:
    int id;
    bool isMainFunction;
    std::vector<std::string> lines;

   public:
    GeneratorFunction() {}
    GeneratorFunction(int id, bool isMainFunction = false) : id(id), isMainFunction(isMainFunction) {}
    ~GeneratorFunction() = default;

    int getId();
    std::vector<std::string> getLines();
    void addLine(std::string);
};

#endif