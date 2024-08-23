#include "generatorScope.h"

int GeneratorScope::getVarCounter() {
    return avaiableVarsID.size();
}

int GeneratorScope::getIndentation() {
    return indentation;
}

std::string GeneratorScope::getIndentationTabs(int d) {
    std::string tabs = "";
    for (int i = 0; i < indentation + d; i++) {
        tabs += "   ";
    }
    return tabs;
}

void GeneratorScope::addVar(int id) {
    numberOfAddedVars++;
    avaiableVarsID.push_back(id);
}

int GeneratorScope::addParam() {
    avaiableParamsID.push_back(avaiableParamsID.size());
    return avaiableParamsID.size() - 1;
}