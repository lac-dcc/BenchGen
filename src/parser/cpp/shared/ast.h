#ifndef AST_H
#define AST_H

#include "enums.h"
#include "typedefs.h"

class Node;
class StatementCode;
class LambdaCode;
class Id;
class Insert;
class Remove;
class New;
class Del;
class Contains;
class Loop;
class Call;
class Seq;
class If;
class ParamIf;
class NoParamIf;
class CodeElse;
class NoCodeElse;

class Node {
   public:
    virtual void codegen() = 0;
    virtual void print(int indent = 0) = 0;
};

class StatementCode : public Node {
   private:
    std::shared_ptr<Node> stmt;
    std::shared_ptr<Node> code;

   public:
    StatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : stmt(stmt), code(code) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "StatementCode" << std::endl;
        stmt->print(ident + 2);
        code->print(ident + 2);
    }
};

class LambdaCode : public Node {
   public:
    LambdaCode() {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "LambdaCode" << std::endl;
    }
};

class Id : public Node {
   private:
    std::string id;

   public:
    Id(std::string id) : id(id) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Id: " << id << std::endl;
    }
};

class Insert : public Node {
   public:
    Insert() {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Insert" << std::endl;
    }
};

class Remove : public Node {
   public:
    Remove() {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Remove" << std::endl;
    }
};

class New : public Node {
   public:
    New() {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "New" << std::endl;
    }
};

class Del : public Node {
   public:
    Del() {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Del" << std::endl;
    }
};

class Contains : public Node {
   public:
    Contains() {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Contains" << std::endl;
    }
};

class Loop : public Node {
   private:
    std::shared_ptr<Node> code;

   public:
    Loop(std::shared_ptr<Node> code) : code(code) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Loop" << std::endl;
        code->print(ident + 2);
    }
};

class Call : public Node {
   private:
    std::shared_ptr<Node> code;

   public:
    Call(std::shared_ptr<Node> code) : code(code) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Call" << std::endl;
        code->print(ident + 2);
    }
};

class Seq : public Node {
   private:
    std::shared_ptr<Node> code;

   public:
    Seq(std::shared_ptr<Node> code) : code(code) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "Seq" << std::endl;
        code->print(ident + 2);
    }
};

class If : public Node {
   private:
    std::shared_ptr<Node> ifParam;

   public:
    If(std::shared_ptr<Node> ifParam) : ifParam(ifParam) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "If" << std::endl;
        ifParam->print(ident + 2);
    }
};

class IfParam : public Node {
   private:
    std::shared_ptr<Node> code;
    std::shared_ptr<Node> else_;

   public:
    IfParam(std::shared_ptr<Node> code, std::shared_ptr<Node> else_) : code(code), else_(else_) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "IfParam" << std::endl;
        code->print(ident + 2);
        else_->print(ident + 2);
    }
};

class NoParamIf : public Node {
   private:
    std::shared_ptr<Node> else_;

   public:
    NoParamIf(std::shared_ptr<Node> else_) : else_(else_) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "NoParamIf" << std::endl;
        else_->print(ident + 2);
    }
};

class CodeElse : public Node {
   private:
    std::shared_ptr<Node> code;

   public:
    CodeElse(std::shared_ptr<Node> code) : code(code) {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "CodeElse" << std::endl;
        code->print(ident + 2);
    }
};

class NoCodeElse : public Node {
   public:
    NoCodeElse() {
    }

    void codegen() override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "NoCodeElse" << std::endl;
    }
};

#endif
