#ifndef VARIABLEGENERATOR_H
#define VARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class GeneratorVariable {
   public:
    int id;
    std::string name;
    std::string typeString;
    virtual ~GeneratorVariable() {}
    virtual std::vector<std::string> new_() = 0;
    virtual std::vector<std::string> insert() = 0;
    virtual std::vector<std::string> remove() = 0;
    virtual std::vector<std::string> contains(bool = false) = 0;
    virtual std::vector<std::string> del() = 0;
};

class Scalar : public GeneratorVariable {
   public:
    int initialValue;
    Scalar() {}
    Scalar(int initialValue, int id);
    std::vector<std::string> new_() override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool = false) override;
    std::vector<std::string> del() override;
};

class Array : public GeneratorVariable {
   public:
    int totalSize;
    Array(){};
    Array(int totalSize, int* values, int id);
    ~Array();
    std::vector<std::string> new_() override;
    std::vector<std::string> realloc();
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool = false) override;
    std::vector<std::string> del() override;
};

class Matrix : public GeneratorVariable {
   public:
    int rows;
    int cols;
    Matrix(){};
    Matrix(int rows, int columns, int* values, int id);
    std::vector<std::string> new_() override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool = false) override;
    std::vector<std::string> del() override;
};

class Vector : public GeneratorVariable {
   public:
    int currentSize;
    Vector(){};
    Vector(int id);
    std::vector<std::string> new_() override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool = false) override;
    std::vector<std::string> del() override;
};

class List : public GeneratorVariable {
   public:
    List(){};
    List(int id);
    std::vector<std::string> new_() override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool = false) override;
    std::vector<std::string> del() override;
};

class VariableFactory {
   public:
    static GeneratorVariable* createVariable(std::string type, int identifier);
};

#endif