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
    int indentation;

   public:
    GeneratorScope() {
        vars = std::list<GeneratorVar>();
        indentation = 1;
    }
    GeneratorScope(std::list<GeneratorVar> parentVars, int indentation) : vars(parentVars), indentation(indentation) {
    }
    ~GeneratorScope() = default;

    std::list<GeneratorVar> getVars();
    int getIndentation();
    std::string getIndentationTabs(int = 0);
    void addVar(GeneratorVar);
    void addNewVar();
};

#endif