#ifndef VARIABLEGENERATOR_H
#define VARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

class GeneratorVariable {
   public:
    int id;
    std::string name;
    virtual ~GeneratorVariable() {}
    virtual std::string eval() = 0;
    virtual std::string add() = 0;
    virtual std::string remove() = 0;
};

class Scalar : public GeneratorVariable {
   public:
    int value;
    Scalar() {}
    Scalar(int initialValue, int id);
    std::string eval() override;
    std::string add() override;
    std::string remove() override;
};

class Array : public GeneratorVariable {
   public:
    int totalSize;
    int* array;
    Array(){};
    Array(int totalSize, int* values, int id);
    ~Array();
    std::string eval() override;
    std::string add() override;
    std::string remove() override;
};

class Matrix : public GeneratorVariable {
   public:
    int** matrix;
    int rows;
    int cols;
    Matrix(){};
    Matrix(int rows, int columns, int* values, int id);
    std::string eval() override;
    std::string add() override;
    std::string remove() override;
};

class VariableFactory {
   public:
    static GeneratorVariable* createVariable(std::string type, int identifier);
};

#endif