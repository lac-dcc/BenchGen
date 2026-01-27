#include "array.h"

string CArray::Variable::type = "array_t";

std::vector<std::string> CArray::genIncludes() {
    return {};
}

std::vector<std::string> CArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("typedef struct {");
    temp.push_back("   unsigned int* data;");
    temp.push_back("   size_t size;");
    temp.push_back("   size_t refC;");
    temp.push_back("    int id;");
    temp.push_back("} " + type + ";");
    temp.push_back("typedef struct {");
    temp.push_back("   " + type + "** data;");
    temp.push_back("   size_t size;");
    temp.push_back("} " + type + "_param;");
    return temp;
}

CArray::CArray(int id, int totalSize) {
    this->id = id;
    this->totalSize = totalSize;
    this->name = "array" + std::to_string(id);
}

std::vector<std::string> CArray::new_(bool inFunction) {
    std::vector<std::string> temp = {this->type + "* " + this->name + ";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars->data[--pCounter];");
        temp.push_back("   " + this->name + "->refC++;");
        temp.push_back("   DEBUG_COPY(" + this->name + "->id);");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + " = (" + this->type + "*)malloc(sizeof(" + this->type + "));");
        temp.push_back("   " + this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back("   " + this->name + "->refC = 1;");
        temp.push_back("   " + this->name + "->id = " + std::to_string(this->id) + ";");
        temp.push_back("   " + this->name + "->data = (unsigned int*)malloc(" + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("   memset(" + this->name + "->data, 0, " + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("   DEBUG_NEW(" + this->name + "->id);");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + " = (" + this->type + "*)malloc(sizeof(" + this->type + "));");
        temp.push_back(this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back(this->name + "->refC = 1;");
        temp.push_back("   " + this->name + "->id = " + std::to_string(this->id) + ";");
        temp.push_back(this->name + "->data = (unsigned int*)malloc(" + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("memset(" + this->name + "->data, 0, " + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("DEBUG_NEW(" + this->name + "->id);");
    }
    return temp;
}

std::vector<std::string> CArray::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("   " + this->name + "->data[i]++;");
    temp.push_back("}");
    temp.push_back("COUNT_INSERT();");
    return temp;
}

std::vector<std::string> CArray::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("   " + this->name + "->data[i]--;");
    temp.push_back("}");
    temp.push_back("COUNT_REMOVE();");
    return temp;
}

std::vector<std::string> CArray::contains(bool shouldReturn) {
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
    temp.push_back("COUNT_CONTAINS();");
    return temp;
}

std::vector<std::string> CArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + "->refC--;");
    temp.push_back("if(" + this->name + "->refC == 0) {");
    temp.push_back("   free(" + this->name + "->data);");
    temp.push_back("   free(" + this->name + ");");
    temp.push_back("   DEBUG_FREE(" + this->name + "->id);");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CArray::genParams(std::string paramName, std::vector<Variable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back(type + "_param " + paramName + ";");
    temp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    temp.push_back(paramName + ".data = (" + type + "**)malloc(" + paramName + ".size*sizeof(" + type + "*));");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }
    return temp;
}

CArray::~CArray() {
} 
