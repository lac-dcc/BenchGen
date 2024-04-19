#ifndef GENERATORSCOPE_H
#define GENERATORSCOPE_H
#include <map>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"
#include "generatorVariable.h"

class GeneratorScope {
   private:
    int indentation;

   public:
    int addedVars;
    std::vector<int> avaiableVarsID;
    GeneratorScope(int identation = 1) {
        avaiableVarsID = {};
        addedVars = 0;
        this->indentation = identation;
    }
    GeneratorScope(std::vector<int> parentVars, int parentIndentation) {
        this->avaiableVarsID = parentVars;
        this->addedVars = 0;
        this->indentation = parentIndentation + 1;
    }
    ~GeneratorScope() {}

    int getVarCounter();
    int getIndentation();
    std::string getIndentationTabs(int = 0);
    void addVar(int id);
};

#endif