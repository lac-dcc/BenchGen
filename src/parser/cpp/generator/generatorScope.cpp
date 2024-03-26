#include "generatorScope.h"

int GeneratorScope::getVarCounter() {
    return varCounter;
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

int GeneratorScope::addVar() {
    varCounter++;
    return varCounter;
}