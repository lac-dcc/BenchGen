#ifndef AST_H
#define AST_H

#include "enums.h"
#include "globalStructs.h"

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
    virtual ~Node() = default;
    virtual void gen(Generator& generator) = 0;
    virtual void print(int indent = 0) = 0;
};

class StatementCode : public Node {
   private:
    std::shared_ptr<Node> stmt;
    std::shared_ptr<Node> code;

   public:
    StatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : stmt(stmt), code(code) {
    }

    ~StatementCode() {
    }

    void gen(Generator& generator) override {
        stmt->gen(generator);
        code->gen(generator);
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

    ~LambdaCode() {
    }

    void gen(Generator& generator) override {
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

    ~Id() {
    }

    void gen(Generator& generator) override {
        generator.generateIdCall(id);
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

    ~Insert() {
    }

    void gen(Generator& generator) override {
        generator.generateInsert();
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

    ~Remove() {
    }

    void gen(Generator& generator) override {
        generator.generateRemove();
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

    ~New() {
    }

    void gen(Generator& generator) override {
        generator.generateNew();
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

    ~Del() {
    }

    void gen(Generator& generator) override {
        generator.generateDel();
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

    ~Contains() {
    }

    void gen(Generator& generator) override {
        generator.generateContains();
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

    ~Loop() {
    }

    void gen(Generator& generator) override {
        generator.generateLoop();
        code->gen(generator);
        generator.scopeEnd();
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

    ~Call() {
    }

    void gen(Generator& generator) override {
        generator.generateCall();
        code->gen(generator);
        generator.functionEnd();
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

    ~Seq() {
    }

    void gen(Generator& generator) override {
        // TODO: What to do with sequences?
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

    ~If() {
    }

    void gen(Generator& generator) override {
        ifParam->gen(generator);
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

    ~IfParam() {
    }

    void gen(Generator& generator) override {
        generator.generateIf();
        code->gen(generator);
        generator.scopeEnd();
        else_->gen(generator);
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

    ~NoParamIf() {
    }

    void gen(Generator& generator) override {
        generator.generateIf();
        else_->gen(generator);
        generator.scopeEnd();
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

    ~CodeElse() {
    }

    void gen(Generator& generator) override {
        generator.generateElse();
        code->gen(generator);
        generator.scopeEnd();
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

    ~NoCodeElse() {
    }

    void gen(Generator& generator) override {
    }

    void print(int ident) override {
        for (int i = 0; i < ident; i++) {
            std::cout << " ";
        }
        std::cout << "NoCodeElse" << std::endl;
    }
};

#endif
