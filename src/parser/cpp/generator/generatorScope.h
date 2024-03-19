#ifndef GENERATORSCOPE_H
#define GENERATORSCOPE_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

struct GeneratorVar {
    std::string letter;
    int number;
};

class GeneratorScope {
    std::list<GeneratorVar> vars;

   public:
    GeneratorScope() {
        vars = std::list<GeneratorVar>();
    }
    GeneratorScope(std::list<GeneratorVar> parentVars) : vars(parentVars) {
    }
    ~GeneratorScope() = default;

    std::list<GeneratorVar> getVars();
    void addVar(GeneratorVar);
    void addNewVar();
};

#endif