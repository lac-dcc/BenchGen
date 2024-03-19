#include "generatorFunction.h"

std::vector<std::string> GeneratorFunction::getLines() {
    return lines;
}

void GeneratorFunction::addLine(std::string line) {
    lines.push_back(line);
}

void GeneratorFunction::insertReturn(int n) {
    lines.insert(lines.end() - 1, "   return " + std::to_string(n) + ";");
}