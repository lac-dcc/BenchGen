#include "nimGeneratorVariable.h"

NimGeneratorArray::NimGeneratorArray(int size, int id) {
    this->typeString = "ArrayT";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

NimGeneratorArray::~NimGeneratorArray() {}

std::vector<std::string> NimGeneratorArray::new_(bool inFunction) {
    std::string n = this->name;
    std::vector<std::string> temp = {"var " + n + ": ptr ArrayT"};
    if (inFunction) {
        temp.push_back("if pCounter > 0:");
        temp.push_back("   dec pCounter");
        temp.push_back("   " + n + " = vars.data[pCounter]");
        temp.push_back("   inc " + n + ".refC");
        temp.push_back("   debugCopy(" + n + ".id)");
        temp.push_back("else:");
        temp.push_back("   " + n + " = cast[ptr ArrayT](alloc(sizeof(ArrayT)))");
        temp.push_back("   " + n + ".size = " + std::to_string(this->totalSize));
        temp.push_back("   " + n + ".refC = 1");
        temp.push_back("   " + n + ".id = " + std::to_string(this->id));
        temp.push_back("   " + n + ".data = cast[ptr UncheckedArray[uint32]](alloc(" + n + ".size * sizeof(uint32)))");
        temp.push_back("   zeroMem(" + n + ".data, " + n + ".size * sizeof(uint32))");
        temp.push_back("   debugNew(" + n + ".id)");
    } else {
        temp.push_back(n + " = cast[ptr ArrayT](alloc(sizeof(ArrayT)))");
        temp.push_back(n + ".size = " + std::to_string(this->totalSize));
        temp.push_back(n + ".refC = 1");
        temp.push_back(n + ".id = " + std::to_string(this->id));
        temp.push_back(n + ".data = cast[ptr UncheckedArray[uint32]](alloc(" + n + ".size * sizeof(uint32)))");
        temp.push_back("zeroMem(" + n + ".data, " + n + ".size * sizeof(uint32))");
        temp.push_back("debugNew(" + n + ".id)");
    }
    return temp;
}

std::vector<std::string> NimGeneratorArray::insert() {
    std::string n = this->name;
    std::vector<std::string> temp = {"for i in 0 ..< " + n + ".size:"};
    temp.push_back("   inc " + n + ".data[i]");
    return temp;
}

std::vector<std::string> NimGeneratorArray::remove() {
    std::string n = this->name;
    std::vector<std::string> temp = {"for i in 0 ..< " + n + ".size:"};
    temp.push_back("   dec " + n + ".data[i]");
    return temp;
}

std::vector<std::string> NimGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;
    std::string n = this->name;
    std::vector<std::string> temp = {};
    temp.push_back("for i in 0 ..< " + n + ".size:");
    temp.push_back("   if " + n + ".data[i] == " + std::to_string(compare) + ":");
    if (shouldReturn) {
        temp.push_back("      return " + n);
    } else {
        temp.push_back("      " + n + ".data[i] += uint32(" + std::to_string(compare) + ")");
    }
    return temp;
}

std::vector<std::string> NimGeneratorArray::free() {
    std::string n = this->name;
    std::vector<std::string> temp = {};
    temp.push_back("dec " + n + ".refC");
    temp.push_back("if " + n + ".refC == 0:");
    temp.push_back("   dealloc(" + n + ".data)");
    temp.push_back("   dealloc(" + n + ")");
    temp.push_back("   debugFree(" + n + ".id)");
    return temp;
}

std::vector<std::string> NimGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> NimGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("type");
    temp.push_back("  ArrayT* = object");
    temp.push_back("    data*: ptr UncheckedArray[uint32]");
    temp.push_back("    size*: int");
    temp.push_back("    refC*: int");
    temp.push_back("    id*: int");
    temp.push_back("  ArrayTParam* = object");
    temp.push_back("    data*: ptr UncheckedArray[ptr ArrayT]");
    temp.push_back("    size*: int");
    return temp;
}

std::vector<std::string> NimGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back("var " + paramName + ": ArrayTParam");
    temp.push_back(paramName + ".size = " + std::to_string(varsParams.size()));
    temp.push_back(paramName + ".data = cast[ptr UncheckedArray[ptr ArrayT]](alloc(" + paramName + ".size * sizeof(ptr ArrayT)))");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name);
    }
    return temp;
}
