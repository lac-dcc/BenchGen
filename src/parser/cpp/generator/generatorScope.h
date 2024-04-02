#ifndef GENERATORSCOPE_H
#define GENERATORSCOPE_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include <map>
#include "variableGenerator.h"

class GeneratorScope {
   private:
    int addedVars;
    int indentation;
 
   public:
    std::vector<int> avaiableVarsID;
    GeneratorScope() {
        addedVars = 0;
        indentation = 1;
    }
    GeneratorScope(std::vector<int> parentVars, int parentIndentation) {
        this->avaiableVarsID = parentVars;
        this->addedVars = 0;
        this->indentation = parentIndentation;
    }
    ~GeneratorScope() { }
    
    int getVarCounter();
    int getIndentation();
    std::string getIndentationTabs(int = 0);
    void addVar(int id);
    
    friend class Generator; 
};

#endif