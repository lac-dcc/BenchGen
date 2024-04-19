#include "generatorVariable.h"

Scalar::Scalar(int initialValue, int id) {
    this->value = initialValue;
    this->id = id;
    this->name = "var" + std::to_string(id);
}

std::string Scalar::eval() {
    return "int " + this->name + " = " + std::to_string(value) + ";";
}

Array::Array(int size, int* values, int id) {
    this->array = values;
    this->size = size;
    this->id = id;
    this->name = "var" + std::to_string(id);
}

std::string Array::eval() {
    std::string temp = "int* " + this->name;
    temp = temp + " = new int[" + std::to_string(this->size) + "];";
    return temp;
}

Array::~Array() {
    delete[] this->array;
}

Matrix::Matrix(int rows, int columns, int* values, int id) {
    this->rows = rows;
    this->cols = columns;
    this->matrix = new int*[rows];
    for (int i = 0; i < this->rows; i++) {
        this->matrix[i] = new int[columns];
    }
    this->name = "var" + std::to_string(id);
}

std::string Matrix::eval() {
    return "";
}

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    if (type == "scalar") {
        return new Scalar(1, identifier);
    }
    if (type == "array") {
        int size = rand() % 1000;
        int* temp_array = new int[size];
        for (int i = 0; i < size; i++) {
            temp_array[i] = 0;
        }
        return new Array(size, temp_array, identifier);
    }
    // if(type == "matrix") {

    // }
    return nullptr;
}