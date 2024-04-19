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
    this->value = initialValue;
    this->id = id;
    this->name = "scalar" + std::to_string(id);
}

std::string Scalar::eval() {
    return "int " + this->name + " = " + std::to_string(value) + ";";
}

std::vector<std::string> Scalar::insert() {
    this->value++;
    return {this->name + "++;"};
}

std::vector<std::string> Scalar::remove() {
    this->value--;
    return {this->name + "--;"};
}

std::vector<std::string> Scalar::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("if (" + this->name + " == 0) {");
    temp.push_back("   printf(\"IS 0!\");");
    temp.push_back("}");
    return temp;
}

// ARRAY

Array::Array(int size, int* values, int id) {
    this->array = values;
    this->totalSize = size;
    this->id = id;
    this->name = "array" + std::to_string(id);
}

std::string Array::eval() {
    std::string temp = "int* " + this->name;
    temp += " = new int[" + std::to_string(this->totalSize) + "];";
    return temp;
}

std::vector<std::string> Array::insert() {
    for (int i = 0; i < this->totalSize; i++) {
        this->array[i]++;
    }
    std::vector<std::string> temp = {"for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {"};
    temp.push_back("   " + this->name + "[i]++; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::remove() {
    for (int i = 0; i < this->totalSize; i++) {
        this->array[i]--;
    }
    std::vector<std::string> temp = {"for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {"};
    temp.push_back("   " + this->name + "[i]--; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Array::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("for (int i = 0; i < " + std::to_string(this->totalSize) + "; i++) {");
    temp.push_back("   if (" + this->name + "[i] == 0) { ");
    temp.push_back("      printf(\"IS 0!\");");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

Array::~Array() {
    delete[] this->array;
}

// MATRIX

Matrix::Matrix(int rows, int columns, int* values, int id) {
    this->rows = rows;
    this->cols = columns;
    this->matrix = new int*[rows];
    for (int i = 0; i < this->rows; i++) {
        this->matrix[i] = new int[columns];
    }
    this->name = "matrix" + std::to_string(id);
}

std::string Matrix::eval() {
    return "";
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

// VECTOR

Vector::Vector(int id) {
    this->vector = std::vector<int>();
    this->id = id;
    this->name = "vector" + std::to_string(id);
}

std::string Vector::eval() {
    std::string temp = "std::vector<int> " + this->name;
    temp += " = std::vector<int>();";
    return temp;
}

std::vector<std::string> Vector::insert() {
    this->vector.push_back(0);
    for (auto&& i : this->vector) {
        i++;
    }
    std::vector<std::string> temp = {this->name + ".push_back(0);"};
    temp.push_back("for (auto&& i : " + this->name + ") { ");
    temp.push_back("   i++; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Vector::remove() {
    std::vector<std::string> temp = {};
    if (this->vector.size() >= 0) {
        this->vector.pop_back();
        temp.push_back(this->name + ".pop_back();");
    }
    for (auto&& i : this->vector) {
        i--;
    }
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   i--; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> Vector::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   if (i == 0) {");
    temp.push_back("      printf(\"IS 0!\");");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

// LIST

List::List(int id) {
    this->list = std::list<int>();
    this->id = id;
    this->name = "list" + std::to_string(id);
}

std::string List::eval() {
    std::string temp = "std::list<int> " + this->name;
    temp += " = std::list<int>();";
    return temp;
}

std::vector<std::string> List::insert() {
    this->list.push_back(0);
    for (auto&& i : this->list) {
        i++;
    }
    std::vector<std::string> temp = {this->name + ".push_back(0);"};
    temp.push_back("for (auto&& i : " + this->name + ") { ");
    temp.push_back("   i++; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> List::remove() {
    std::vector<std::string> temp = {};
    if (this->list.size() >= 0) {
        this->list.pop_back();
        temp.push_back(this->name + ".pop_back();");
    }
    for (auto&& i : this->list) {
        i--;
    }
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   i--; ");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> List::contains() {
    std::vector<std::string> temp = {};
    temp.push_back("for (auto&& i : " + this->name + ") {");
    temp.push_back("   if (i == 0) {");
    temp.push_back("      printf(\"IS 0!\");");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}