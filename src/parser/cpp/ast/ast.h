#ifndef AST_H
#define AST_H

#include <cmath>

#include "../generator/generator.h"
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

void printIndentationSpaces(int);

std::string generateIfCondition(Generator& generator);

class Node {
   public:
    virtual ~Node() = default;
    virtual void gen(Generator&) = 0;
    virtual void print(int indent = 0) = 0;
};

class StatementCode : public Node {
   private:
    std::shared_ptr<Node> stmt;
    std::shared_ptr<Node> code;

   public:
    StatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : stmt(stmt), code(code) {
    }

    void gen(Generator&) override;

    void print(int) override;
};

class LambdaCode : public Node {
   public:
    void gen(Generator&) override;

    void print(int ident) override;
};

class Id : public Node {
   private:
    std::string id;

   public:
    Id(std::string id) : id(id) {
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class Insert : public Node {
   public:
    void gen(Generator&) override;

    void print(int ident) override;
};

class Remove : public Node {
   public:
    void gen(Generator&) override;

    void print(int ident) override;
};

class New : public Node {
   public:
    void gen(Generator&) override;

    void print(int ident) override;
};

class Del : public Node {
   public:
    void gen(Generator&) override;

    void print(int ident) override;
};

class Contains : public Node {
   public:
    void gen(Generator&) override;

    void print(int ident) override;
};

class Loop : public Node {
   private:
    std::shared_ptr<Node> code;

   public:
    Loop(std::shared_ptr<Node> code) : code(code) {
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class Call : public Node {
   private:
    int id;
    std::shared_ptr<Node> code;

   public:
    int conditionalCounts;

    Call(int id, std::shared_ptr<Node> code) : id(id), code(code), conditionalCounts(0) {
    }

    Call() : conditionalCounts(0) {
    }

    void setId(int id) {
        this->id = id;
    }

    void setCode(std::shared_ptr<Node> code) {
        this->code = code;
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class Seq : public Node {
   private:
    std::shared_ptr<Node> code;

   public:
    Seq(std::shared_ptr<Node> code) : code(code) {
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class If : public Node {
   private:
    std::shared_ptr<Node> ifParam;

   public:
    If(std::shared_ptr<Node> ifParam) : ifParam(ifParam) {
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class IfParam : public Node {
   private:
    std::shared_ptr<Node> code;
    std::shared_ptr<Node> else_;

   public:
    IfParam(std::shared_ptr<Node> code, std::shared_ptr<Node> else_) : code(code), else_(else_) {
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class NoParamIf : public Node {
   private:
    std::shared_ptr<Node> else_;

   public:
    NoParamIf(std::shared_ptr<Node> else_) : else_(else_) {
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class CodeElse : public Node {
   private:
    std::shared_ptr<Node> code;

   public:
    CodeElse(std::shared_ptr<Node> code) : code(code) {
    }

    void gen(Generator&) override;

    void print(int ident) override;
};

class NoCodeElse : public Node {
   public:
    void gen(Generator&) override;

    void print(int ident) override;
};

#endif
