#include "dGeneratorVariable.h"


DGeneratorArray::DGeneratorArray(int size, int id) {
    this->typeString = "array_t";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> DGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {this->typeString + "* " + this->name + ";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars.data[--pCounter];");
        temp.push_back("   " + this->name + ".refC++;");
        temp.push_back("   DEBUG_COPY(" + this->name + ".id);");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + " = cast(" + this->typeString + "*)malloc(" + this->typeString + ".sizeof);");
        temp.push_back("   " + this->name + ".size = " + std::to_string(this->totalSize) + ";");
        temp.push_back("   " + this->name + ".refC = 1;");
        temp.push_back("   " + this->name + ".id = " + std::to_string(this->id) + ";");
        temp.push_back("   " + this->name + ".data = cast(uint*)malloc(" + this->name + ".size*uint.sizeof);");
        temp.push_back("   memset(" + this->name + ".data, 0, " + this->name + ".size*uint.sizeof);");
        temp.push_back("   DEBUG_NEW(" + this->name + ".id);");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + " = cast(" + this->typeString + "*)malloc(" + this->typeString + ".sizeof);");
        temp.push_back(this->name + ".size = " + std::to_string(this->totalSize) + ";");
        temp.push_back(this->name + ".refC = 1;");
        temp.push_back("   " + this->name + ".id = " + std::to_string(this->id) + ";");
        temp.push_back(this->name + ".data = cast(uint*)malloc(" + this->name + ".size*uint.sizeof);");
        temp.push_back("memset(" + this->name + ".data, 0, " + this->name + ".size*uint.sizeof);");
        temp.push_back("DEBUG_NEW(" + this->name + ".id);");
    }
    return temp;
}

std::vector<std::string> DGeneratorArray::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + ".size; i++) {"};
    temp.push_back("   " + this->name + ".data[i]++;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> DGeneratorArray::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + ".size; i++) {"};
    temp.push_back("   " + this->name + ".data[i]--;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> DGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;
    std::vector<std::string> temp = {};
    temp.push_back("for (int i = 0; i < " + this->name + ".size; i++) {");
    temp.push_back("   if (" + this->name + ".data[i] == " + std::to_string(compare) + ") { ");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      " + this->name + ".data[i] += " + std::to_string(compare) + ";");
    }
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> DGeneratorArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".refC--;");
    temp.push_back("if(" + this->name + ".refC == 0) {");
    temp.push_back("   free(" + this->name + ".data);");
    temp.push_back("   free(" + this->name + ");");
    temp.push_back("   DEBUG_FREE(" + this->name + ".id);");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> DGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> DGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("struct " + this->typeString + " {");
    temp.push_back("   uint* data;");
    temp.push_back("   size_t size;");
    temp.push_back("   size_t refC;");
    temp.push_back("   int id;");
    temp.push_back("}");
    temp.push_back("struct " + this->typeString + "_param {");
    temp.push_back("   " + this->typeString + "** data;");
    temp.push_back("   size_t size;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> DGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back(this->typeString + "_param " + paramName + ";");
    temp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    temp.push_back(paramName + ".data = cast(" + this->typeString + "**)malloc(" + paramName + ".size*(" + this->typeString + "*).sizeof);");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }
    return temp;
}

DGeneratorArray::~DGeneratorArray() {
}
