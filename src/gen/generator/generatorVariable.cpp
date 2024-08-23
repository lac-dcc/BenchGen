#include "generatorVariable.h"

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    if (type == VarTypes::ARRAY) {
        int size = rand() % 1000;
        int* temp_array = new int[size];
        for (int i = 0; i < size; i++) {
            temp_array[i] = 0;
        }
        return new Array(size, temp_array, identifier);
    }

    // TODO: Error Handling
    return nullptr;
}

// ARRAY

Array::Array(int size, int* values, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> Array::new_(bool inFunction) {
    std::vector<std::string> temp = {this->typeString + " " + this->name + ";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars->data[--pCounter];");
        temp.push_back("   " + this->name + ".refC++;");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + ".size = " + std::to_string(this->totalSize) + ";");
        temp.push_back("   " + this->name + ".refC = 1;");
        temp.push_back("   " + this->name + ".data = (unsigned int*)malloc(" + this->name + ".size*sizeof(unsigned int));");
        temp.push_back("   memset(" + this->name + ".data, 0, " + this->name + ".size*sizeof(unsigned int));");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + ".size = " + std::to_string(this->totalSize) + ";");
        temp.push_back(this->name + ".refC = 1;");
        temp.push_back(this->name + ".data = (unsigned int*)malloc(" + this->name + ".size*sizeof(unsigned int));");
        temp.push_back("memset(" + this->name + ".data, 0, " + this->name + ".size*sizeof(unsigned int));");
    }
    return temp;
}

std::vector<std::string> Array::realloc() {
    std::vector<std::string> temp = {this->name + ".size = " + std::to_string(this->totalSize) + ";"};
    temp.push_back(this->name + ".refC++;");
    temp.push_back(this->name + ".data = (unsigned int*)malloc(" + this->name + ".size*sizeof(unsigned int));");
    temp.push_back("memset(" + this->name + ".data, 0, " + this->name + ".size*sizeof(unsigned int));");
    return temp;
}

std::vector<std::string> Array::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + ".size; i++) {"};
    temp.push_back("   " + this->name + ".data[i]++;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + ".size; i++) {"};
    temp.push_back("   " + this->name + ".data[i]--;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::contains(bool shouldReturn) {
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

Array::~Array() {
}