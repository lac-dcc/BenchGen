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
    this->typeString = "unsigned int";
    this->initialValue = initialValue;
    this->id = id;
    this->name = "scalar" + std::to_string(id);
}

std::vector<std::string> Scalar::new_() {
    return {this->typeString + " " + this->name + " = " + std::to_string(initialValue) + ";"};
}

std::vector<std::string> Scalar::insert() {
    return {this->name + "++;"};
}

std::vector<std::string> Scalar::remove() {
    return {this->name + "--;"};
}

std::vector<std::string> Scalar::contains(bool shouldReturn) {
    int compare = rand() % 100;
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + " == " + std::to_string(compare) + ") {");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      " + this->name + " += " + std::to_string(compare) + ";");
    }
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Scalar::del() {
    return {this->name + " = 0;"};
}

// ARRAY

Array::Array(int size, int* values, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = "array" + std::to_string(id);
}

std::vector<std::string> Array::new_() {
    std::vector<std::string> temp = {this->typeString + " " + this->name + ";"};
    temp.push_back(this->name + ".size = " + std::to_string(this->totalSize) + ";");
    temp.push_back(this->name + ".data = (unsigned int*)malloc(" + std::to_string(this->totalSize) + "*sizeof(unsigned int));");
    return temp;
}

std::vector<std::string> Array::realloc() {
    std::vector<std::string> temp = {this->name + ".size = " + std::to_string(this->totalSize) + ";"};
    temp.push_back(this->name + ".data = (unsigned int*)malloc(" + std::to_string(this->totalSize) + "*sizeof(unsigned int));");
    return temp;
}

std::vector<std::string> Array::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {"};
    temp.push_back("   " + this->name + ".data[i]++; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {"};
    temp.push_back("   " + this->name + ".data[i]--; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::contains(bool shouldReturn) {
    int compare = rand() % 100;
    std::vector<std::string> temp = {};
    temp.push_back("for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {");
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

std::vector<std::string> Array::del() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + ".size > 0) {");
    temp.push_back("   free(" + this->name + ".data);");
    temp.push_back("   " + this->name + ".size = 0;");
    temp.push_back("}");
    return temp;
}

Array::~Array() {
}

// MATRIX

Matrix::Matrix(int rows, int columns, int* values, int id) {
    this->typeString = "unsigned int**";
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

std::vector<std::string> Matrix::contains(bool shouldReturn) {
    return {};
}

std::vector<std::string> Matrix::del() {
    return {};
}

// VECTOR

Vector::Vector(int id) {
    this->typeString = "std::vector<int>";
    this->id = id;
    this->name = "vector" + std::to_string(id);
}

std::vector<std::string> Vector::new_() {
    std::string temp = this->typeString + " " + this->name;
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

std::vector<std::string> Vector::contains(bool shouldReturn) {
    bool compare = rand() % 100;
    std::vector<std::string> temp = {};
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   if (i == " + std::to_string(compare) + ") {");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      i += " + std::to_string(compare) + ";");
    }
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
    this->typeString = "std::list<int>";
    this->id = id;
    this->name = "list" + std::to_string(id);
}

std::vector<std::string> List::new_() {
    std::string temp = this->typeString + " " + this->name;
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

std::vector<std::string> List::contains(bool shouldReturn) {
    bool compare = rand() % 100;
    std::vector<std::string> temp = {};
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   if (i == " + std::to_string(compare) + ") {");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      i += " + std::to_string(compare) + ";");
    }
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