#include "generatorScope.h"

std::list<GeneratorVar> GeneratorScope::getVars() {
    return vars;
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

void GeneratorScope::addVar(GeneratorVar var) {
    vars.push_back(var);
}

std::string GeneratorScope::addNewVar() {
    GeneratorVar newVar;
    newVar.letter = "x";
    newVar.number = vars.back().number + 1;
    vars.push_back(newVar);
    return newVar.letter + std::to_string(newVar.number);
}