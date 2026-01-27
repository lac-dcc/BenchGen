#include "function.h"

int Function::getId() {
    return id;
}

std::vector<std::string> Function::getLines() {
    return lines;
}

void Function::addLine(std::string line) {
    if (insertBack) {
        lines.insert(lines.end() - 2, line);  // Insert before the last two lines
    } else {
        lines.push_back(line);  // Append to the end
    }
}

void Function::addLine(std::vector<std::string> lines) {
    for (auto line : lines) {
        addLine(line);
    }
}
