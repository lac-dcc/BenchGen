#ifndef GENERATORFUNCTION_H
#define GENERATORFUNCTION_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class GeneratorFunction {
   private:
    std::vector<std::string> lines;

   public:
    GeneratorFunction() {}
    ~GeneratorFunction() = default;

    std::vector<std::string> getLines();
    void addLine(std::string);
    void insertReturn(int);
};

#endif