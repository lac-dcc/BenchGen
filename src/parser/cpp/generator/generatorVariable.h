#ifndef VARIABLEGENERATOR_H
#define VARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

class Variable {
   public:
    int id;
    std::string name;
    virtual ~Variable() {}
    virtual std::string eval() = 0;
};

class Scalar : public Variable {
   public:
    int value;
    Scalar() {}
    Scalar(int initialValue, int id);
    std::string eval() override;
};

class Array : public Variable {
   public:
    int size;
    int* array;
    Array(){};
    Array(int size, int* values, int id);
    ~Array();
    std::string eval() override;
};

class Matrix : public Variable {
   public:
    int** matrix;
    int rows;
    int cols;
    Matrix(){};
    Matrix(int rows, int columns, int* values, int id);
    std::string eval() override;
};

class VariableFactory {
   public:
    static Variable* createVariable(std::string type, int identifier);
};

#endif