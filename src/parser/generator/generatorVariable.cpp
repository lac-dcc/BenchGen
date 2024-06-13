#include "generatorVariable.h"

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    if (type == "scalar") {
        return new Scalar(1, identifier);
    } else if (type == "array") {
        int size = rand() % 1000;
        int* temp_array = new int[size];
        for (int i = 0; i < size; i++) {
            temp_array[i] = 0;
        }
        return new Array(size, temp_array, identifier);
    } else if (type == "matrix") {
        int rows = rand() % 1000;
        int cols = rand() % 1000;
        int* temp_array = new int[rows * cols];
        for (int i = 0; i < rows * cols; i++) {
            temp_array[i] = 0;
        }
        return new Matrix(rows, cols, temp_array, identifier);
    } else if (type == "vector") {
        return new Vector(identifier);
    } else if (type == "list") {
        return new List(identifier);
    }

    // TODO: Error Handling
    return nullptr;
}

// SCALAR

Scalar::Scalar(int initialValue, int id) {
    this->initialValue = initialValue;
    this->id = id;
    this->name = "scalar" + std::to_string(id);
}

std::vector<std::string> Scalar::new_() {
    return {"int " + this->name + " = " + std::to_string(initialValue) + ";"};
}

std::vector<std::string> Scalar::insert() {
    return {this->name + "++;"};
}

std::vector<std::string> Scalar::remove() {
    return {this->name + "--;"};
}

std::vector<std::string> Scalar::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + " == 0) {");
    temp.push_back("      " + this->name + "++;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Scalar::del() {
    return {this->name + " = 0;"};
}

// ARRAY

Array::Array(int size, int* values, int id) {
    this->totalSize = size;
    this->id = id;
    this->name = "array" + std::to_string(id);
}

std::vector<std::string> Array::new_() {
    std::string temp = "int* " + this->name;
    temp += " = (int*)malloc(" + std::to_string(this->totalSize) + "*sizeof(int));";
    return {temp};
}

std::vector<std::string> Array::realloc() {
    std::string temp = this->name + " = (int*)malloc(" + std::to_string(this->totalSize) + "*sizeof(int));";
    return {temp};
}

std::vector<std::string> Array::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {"};
    temp.push_back("   " + this->name + "[i]++; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {"};
    temp.push_back("   " + this->name + "[i]--; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {");
    temp.push_back("   if (" + this->name + "[i] == 0) { ");
    temp.push_back("      " + this->name + "[i]++;");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::del() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + " != NULL) {");
    temp.push_back("   free(" + this->name + ");");
    temp.push_back("   " + this->name + " = NULL;");
    temp.push_back("}");
    return temp;
}

Array::~Array() {
}

// MATRIX

Matrix::Matrix(int rows, int columns, int* values, int id) {
    this->rows = rows;
    this->cols = columns;
    this->name = "matrix" + std::to_string(id);
}

std::vector<std::string> Matrix::new_() {
    return {};
}

std::vector<std::string> Matrix::insert() {
    return {};
}

std::vector<std::string> Matrix::remove() {
    return {};
}

std::vector<std::string> Matrix::contains() {
    return {};
}

std::vector<std::string> Matrix::del() {
    return {};
}

// VECTOR

Vector::Vector(int id) {
    this->id = id;
    this->name = "vector" + std::to_string(id);
}

std::vector<std::string> Vector::new_() {
    std::string temp = "std::vector<int> " + this->name;
    temp += " = std::vector<int>();";
    return {temp};
}

std::vector<std::string> Vector::insert() {
    std::vector<std::string> temp = {this->name + ".push_back(0);"};
    temp.push_back("for (auto&& i : " + this->name + ") { ");
    temp.push_back("   i++; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Vector::remove() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + ".size() > 0) {");
    temp.push_back("   " + this->name + ".pop_back();");
    temp.push_back("}");
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   i--; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Vector::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   if (i == 0) {");
    temp.push_back("      i++;");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Vector::del() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + ".size() > 0) {");
    temp.push_back("   " + this->name + ".clear();");
    temp.push_back("}");
    return temp;
}

// LIST

List::List(int id) {
    this->id = id;
    this->name = "list" + std::to_string(id);
}

std::vector<std::string> List::new_() {
    std::string temp = "std::list<int> " + this->name;
    temp += " = std::list<int>();";
    return {temp};
}

std::vector<std::string> List::insert() {
    std::vector<std::string> temp = {this->name + ".push_back(0);"};
    temp.push_back("for (auto&& i : " + this->name + ") { ");
    temp.push_back("   i++; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> List::remove() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + ".size() > 0) {");
    temp.push_back("   " + this->name + ".pop_back();");
    temp.push_back("}");
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   i--; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> List::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   if (i == 0) {");
    temp.push_back("      i++;");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> List::del() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + ".size() > 0) {");
    temp.push_back("   " + this->name + ".clear();");
    temp.push_back("}");
    return temp;
}