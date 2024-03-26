#ifndef GENERATORSCOPE_H
#define GENERATORSCOPE_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class GeneratorScope {
   private:
    int varCounter;
    int indentation;

   public:
    GeneratorScope() {
        varCounter = 0;
        indentation = 1;
    }
    GeneratorScope(int parentVarCounter, int indentation) : varCounter(parentVarCounter), indentation(indentation) {
    }
    ~GeneratorScope() = default;

    int getVarCounter();
    int getIndentation();
    std::string getIndentationTabs(int = 0);
    int addVar();
};

#endif