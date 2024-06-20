#ifndef GENERATORFUNCTION_H
#define GENERATORFUNCTION_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class GeneratorFunction {
   private:
    int id;
    std::vector<std::string> lines;

   public:
    bool insertBack = false;
    GeneratorFunction() {}
    GeneratorFunction(int id) : id(id) {}
    ~GeneratorFunction() = default;

    int getId();
    std::vector<std::string> getLines();
    void addLine(std::string);
};

#endif