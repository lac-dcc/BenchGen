#include "pipefishGeneratorVariable.h"


PipefishGeneratorArray::PipefishGeneratorArray(int size, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + "_" + std::to_string(id);
}

std::vector<std::string> PipefishGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {"initialize"};
    return temp;
}

std::vector<std::string> PipefishGeneratorArray::insert() {
    std::vector<std::string> temp = {"increment"};
    return temp;
}

std::vector<std::string> PipefishGeneratorArray::remove() {
    std::vector<std::string> temp = {"decrement"};
    return temp;
}

std::vector<std::string> PipefishGeneratorArray::contains(bool shouldReturn) {
    std::vector<std::string> temp = {"contains"};
    return temp;
}

std::vector<std::string> PipefishGeneratorArray::free() {
    std::vector<std::string> temp = {""};
    return temp;
}

std::vector<std::string> PipefishGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> PipefishGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    return temp;
}

std::vector<std::string> PipefishGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
   std::vector<std::string> tmp = {};
    return tmp;
}
PipefishGeneratorArray::~PipefishGeneratorArray() {
}
