#include "generatorFunction.h"

int GeneratorFunction::getId() {
    return id;
}

std::vector<std::string> GeneratorFunction::getLines() {
    return lines;
}

void GeneratorFunction::addLine(std::string line) {
    if (insertBack) {
        lines.insert(lines.end() - 2, line);  // Insert before the last two lines
    } else {
        lines.push_back(line);  // Append to the end
    }
}

void GeneratorFunction::addLine(std::vector<std::string> lines) {
    for (auto line : lines) {
        addLine(line);
    }
}
