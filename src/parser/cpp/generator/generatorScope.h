#ifndef GENERATORSCOPE_H
#define GENERATORSCOPE_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include <map>
#include "variableGenerator.h"

class GeneratorScope {
   private:
    int varCounter;
    int addedVars;
    int indentation;
 
   public:
    GeneratorScope() {
        varCounter = 0;
        addedVars = 0;
        indentation = 1;
    }
    GeneratorScope(int parentVarCounter, int parentIndentation) {
        this->varCounter = parentVarCounter;
        this->addedVars = 0;
        this->indentation = parentIndentation;
    }
    ~GeneratorScope() { }
    
    int getVarCounter();
    int getIndentation();
    std::string getIndentationTabs(int = 0);
    int addVar();
    
    friend class Generator; 
};

#endif