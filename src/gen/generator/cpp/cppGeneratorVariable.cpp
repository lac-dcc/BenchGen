#include "cppGeneratorVariable.h"

CppGeneratorArray::CppGeneratorArray(int size, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> CppGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {this->typeString + "* " + this->name + ";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars->data.at(--pCounter);");
        temp.push_back("   " + this->name + "->refC++;");
        temp.push_back("   DEBUG_COPY(" + this->name + "->id);");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + " = new " + this->typeString + "();");
        temp.push_back("   " + this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back("   " + this->name + "->refC = 1;");
        temp.push_back("   " + this->name + "->id = " + std::to_string(this->id) + ";");
        temp.push_back("   " + this->name + "->data = std::vector<unsigned int>("+this->name+"->size, 0);");
        temp.push_back("   DEBUG_NEW(" + this->name + "->id);");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + " = new " + this->typeString + "();");
        temp.push_back(this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back(this->name + "->refC = 1;");
        temp.push_back(this->name + "->id = " + std::to_string(this->id) + ";");
        temp.push_back(this->name + "->data = std::vector<unsigned int>("+this->name+"->size, 0);");
        temp.push_back("DEBUG_NEW(" + this->name + "->id);");
    }
    return temp;
}

std::vector<std::string> CppGeneratorArray::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("   " + this->name + "->data.push_back(i);");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CppGeneratorArray::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("auto it"+this->name+" = std::find("+this->name+"->data.begin(), "+this->name+"->data.end(),i);");
    temp.push_back("if (it"+this->name+" != "+this->name+"->data.end()) "+this->name+"->data.erase(it"+this->name+");");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CppGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back("bool is_"+this->name+" = std::find("+this->name+"->data.begin(), "+this->name+"->data.end(), "+std::to_string(compare)+") != "+this->name+"->data.end();");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    }
    return temp;
}

std::vector<std::string> CppGeneratorArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + "->refC--;");
    temp.push_back("if(" + this->name + "->refC == 0) {");
    temp.push_back("   "+this->name+"->data.clear();");
    temp.push_back("   delete " + this->name + ";");
    temp.push_back("   DEBUG_FREE(" + this->name + "->id);");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CppGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> CppGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("class Array {");
    temp.push_back("public:");
    temp.push_back("   std::vector<unsigned int> data;");
    temp.push_back("   size_t size;");
    temp.push_back("   size_t refC;");
    temp.push_back("   int id;");
    temp.push_back("   Array() : data(0), size(0), refC(0), id(0) {}");
    temp.push_back("   ~Array() {}");
    temp.push_back("};");

    temp.push_back("class Array_param {");
    temp.push_back("public:");
    temp.push_back("   std::vector<"+ this->typeString + "*> data;");
    temp.push_back("   size_t size;");
    temp.push_back("   Array_param() : size(0) {}");
    temp.push_back("};");
    return temp;
}

std::vector<std::string> CppGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back(this->typeString + "_param " + paramName + ";");
    temp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    temp.push_back("std::vector<Array*> data_"+paramName+"("+std::to_string(varsParams.size())+");");
    temp.push_back(paramName + ".data = data_"+paramName+";");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".data.at(" + std::to_string(i) + ") = " + varsParams[i]->name + ";");
    }
    return temp;
}

CppGeneratorArray::~CppGeneratorArray() {
}