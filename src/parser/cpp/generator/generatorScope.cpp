#include "generatorScope.h"

std::vector<std::string> GeneratorScope::getLines() {
    return lines;
}

std::list<GeneratorVar> GeneratorScope::getVars() {
    return vars;
}

void GeneratorScope::addLine(std::string line) {
    lines.push_back(line);
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

void GeneratorScope::insertReturn(int n) {
    lines.insert(lines.end() - 1, "   return " + std::to_string(n) + ";");
}