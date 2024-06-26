#include "generatorFunction.h"

int GeneratorFunction::getId() {
    return id;
}

std::vector<std::string> GeneratorFunction::getLines() {
    return lines;
}

void GeneratorFunction::addLine(std::string line) {
    if (insertBack) {
        lines.insert(lines.end() - 2, line);
    } else {
        lines.push_back(line);
    }
}