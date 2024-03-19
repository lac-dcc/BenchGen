#include "generatorScope.h"

std::list<GeneratorVar> GeneratorScope::getVars() {
    return vars;
}

void GeneratorScope::addVar(GeneratorVar var) {
    vars.push_back(var);
}

void GeneratorScope::addNewVar() {
    GeneratorVar newVar;
    newVar.letter = "x";
    newVar.number = vars.back().number + 1;
    vars.push_back(newVar);
}