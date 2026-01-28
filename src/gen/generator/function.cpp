#include "function.h"

void Function::setOffset(size_t offset) {
    this->insert_offset = offset;
}

int Function::getId() {
    return id;
}

vector<string> Function::getLines() {
    return lines;
}

void Function::addLine(string code) {
    lines.insert(lines.end()-insert_offset, code);
}

void Function::addLine(vector<string> code) {
    lines.insert(lines.end()-insert_offset, code.begin(), code.end());
}
