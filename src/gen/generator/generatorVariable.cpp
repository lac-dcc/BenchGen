#include "generatorVariable.h"

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    if (type == VarTypes::ARRAY) {
        int size = rand() % 1000;  // Random size for the array
        return new Array(size, identifier);
    }
    // TODO: Error Handling
    return nullptr;
}

std::string VariableFactory::genTypeString(std::string type) {
    GeneratorVariable* var = createVariable(type, 0);
    std::string typeString = var->typeString;
    delete var;
    return typeString;
}

std::vector<std::string> VariableFactory::genIncludes(std::string type) {
    GeneratorVariable* var = createVariable(type, 0);
    std::vector<std::string> includes = var->genIncludes();
    delete var;
    return includes;
}

std::vector<std::string> VariableFactory::genGlobalVars(std::string type) {
    GeneratorVariable* var = createVariable(type, 0);
    std::vector<std::string> globalVars = var->genGlobalVars();
    delete var;
    return globalVars;
}

std::vector<std::string> VariableFactory::genParams(std::string type, std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    GeneratorVariable* var = createVariable(type, 0);
    std::vector<std::string> params = var->genParams(paramName, varsParams);
    delete var;
    return params;
}

// ARRAY

Array::Array(int size, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> Array::new_(bool inFunction) {
    std::vector<std::string> temp = {this->typeString + "* " + this->name + ";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars->data[--pCounter];");
        temp.push_back("   " + this->name + "->refC++;");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + " = (" + this->typeString + "*)malloc(sizeof(" + this->typeString + "));");
        temp.push_back("   " + this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back("   " + this->name + "->refC = 1;");
        temp.push_back("   " + this->name + "->data = (unsigned int*)malloc(" + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("   memset(" + this->name + "->data, 0, " + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + " = (" + this->typeString + "*)malloc(sizeof(" + this->typeString + "));");
        temp.push_back(this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back(this->name + "->refC = 1;");
        temp.push_back(this->name + "->data = (unsigned int*)malloc(" + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("memset(" + this->name + "->data, 0, " + this->name + "->size*sizeof(unsigned int));");
    }
    return temp;
}

std::vector<std::string> Array::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("   " + this->name + "->data[i]++;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("   " + this->name + "->data[i]--;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back("for (int i = 0; i < " + this->name + "->size; i++) {");
    temp.push_back("   if (" + this->name + "->data[i] == " + std::to_string(compare) + ") { ");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      " + this->name + "->data[i] += " + std::to_string(compare) + ";");
    }
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + "->refC--;");
    temp.push_back("if(" + this->name + "->refC == 0) {");
    temp.push_back("   free(" + this->name + "->data);");
    temp.push_back("   free(" + this->name + ");");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::genIncludes() {
    std::vector<std::string> temp = {};
    temp.push_back("#include <string.h>");
    return temp;
}

std::vector<std::string> Array::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("typedef struct {");
    temp.push_back("   unsigned int* data;");
    temp.push_back("   size_t size;");
    temp.push_back("   size_t refC;");
    temp.push_back("} " + this->typeString + ";");
    temp.push_back("typedef struct {");
    temp.push_back("   Array** data;");
    temp.push_back("   size_t size;");
    temp.push_back("} " + this->typeString + "Param;");
    return temp;
}

std::vector<std::string> Array::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back(this->typeString + "Param " + paramName + ";");
    temp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    temp.push_back(paramName + ".data = (" + this->typeString + "**)malloc(" + paramName + ".size*sizeof(" + this->typeString + "*));");
    for (int i = 0; i < varsParams.size(); i++) {
        temp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }
    return temp;
}

Array::~Array() {
}
