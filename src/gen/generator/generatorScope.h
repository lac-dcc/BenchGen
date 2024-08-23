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
    int numberOfAddedVars;
    std::vector<int> avaiableVarsID;
    std::vector<int> avaiableParamsID;
    GeneratorScope(int identation = 1) {
        avaiableVarsID = {};
        avaiableParamsID = {};
        numberOfAddedVars = 0;
        this->indentation = identation;
    }
    GeneratorScope(std::vector<int> parentVars, std::vector<int> parentParams, int parentIndentation) {
        this->avaiableVarsID = parentVars;
        this->avaiableParamsID = parentParams;
        this->numberOfAddedVars = 0;
        this->indentation = parentIndentation + 1;
    }
    ~GeneratorScope() {}

    int getVarCounter();
    int getIndentation();
    std::string getIndentationTabs(int = 0);
    void addVar(int id);
    int addParam();
};

#endif