#ifndef ADAAST_H
#define ADAAST_H

#include <cmath>

#include "../../generator/languageGenerator.h"
#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../languageAst.h"

void adaprintIndentationSpaces(int indent);
std::string adagenerateIfCondition(ProgrammingLanguageGenerator& generator);

class AdaStatementCode : public StatementCode {
   public:
    AdaStatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : StatementCode(stmt, code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int) override;
    ~AdaStatementCode() = default;
};

class AdaLambdaCode : public LambdaCode {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaLambdaCode() = default;
};

class AdaId : public Id {
   public:
    AdaId(std::string id) : Id(id) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaId() = default;
};

class AdaInsert : public Insert {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaInsert() = default;
};

class AdaRemove : public Remove {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaRemove() = default;
};

class AdaNew : public New {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaNew() = default;
};

class AdaContains : public Contains {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaContains() = default;
};

class AdaLoop : public Loop {
   public:
    AdaLoop(std::shared_ptr<Node> code) : Loop(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaLoop() = default;
};

class AdaCall : public Call {
   public:
    ~AdaCall() {}
    AdaCall(int id, std::shared_ptr<Node> code) : Call(id, code) {}
    AdaCall() {}
    void setId(int id) override { this->id = id; }
    void setCode(std::shared_ptr<Node> code) override { this->code = code; }
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
};

class AdaSeq : public Seq {
   public:
    AdaSeq(std::shared_ptr<Node> code) : Seq(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaSeq() = default;
};

class AdaIf : public If {
   public:
    AdaIf(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2) : If(c1, c2) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~AdaIf() = default;
};

#endif
