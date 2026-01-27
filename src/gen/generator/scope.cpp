#include "scope.h"

int Scope::getVarCounter() {
    return availableVarIDs.size();
}

int Scope::getDepth() {
    return depth;
}

std::string Scope::generateSpaces(int d) {
    std::string spaces = "";
    for (int i = 0; i < depth + d; i++)
        spaces += "    ";
    return spaces;
}

void Scope::addVar(int id) {
    varCount++;
    availableVarIDs.push_back(id);
}

int Scope::addParam() {
    availableParamIDs.push_back(availableParamIDs.size());
    return availableParamIDs.size() - 1;
}
