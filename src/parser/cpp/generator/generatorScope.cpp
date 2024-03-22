#include "generatorScope.h"

GeneratorVar GeneratorScope::getLastVar() {
    for (std::list<GeneratorVar>::reverse_iterator it = vars.rbegin(); it != vars.rend(); it++) {
        if (it->letter == "x") {
            return *it;
        }
    }
    GeneratorVar var;
    var.letter = "x";
    var.number = 0;
    return var;
}

GeneratorVar GeneratorScope::getLastLoopVar() {
    for (std::list<GeneratorVar>::reverse_iterator it = vars.rbegin(); it != vars.rend(); it++) {
        if (it->letter == "i") {
            return *it;
        }
    }
    GeneratorVar var;
    var.letter = "i";
    var.number = 0;
    return var;
}

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

std::string GeneratorScope::addNewVar() {
    GeneratorVar lastVar = getLastVar();
    GeneratorVar newVar;
    newVar.letter = "x";
    newVar.number = lastVar.number + 1;
    vars.push_back(newVar);
    return newVar.letter + std::to_string(newVar.number);
}

std::string GeneratorScope::addNewLoopVar() {
    GeneratorVar lastVar = getLastLoopVar();
    GeneratorVar newVar;
    newVar.letter = "i";
    newVar.number = lastVar.number + 1;
    vars.push_back(newVar);
    return newVar.letter + std::to_string(newVar.number);
}