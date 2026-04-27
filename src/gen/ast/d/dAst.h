#ifndef DAST_H
#define DAST_H

#include <cmath>

#include "../../generator/languageGenerator.h"
#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../languageAst.h"

void dprintIndentationSpaces(int indent);
std::string dgenerateIfCondition(ProgrammingLanguageGenerator& generator);

class DStatementCode : public StatementCode {
   public:
    DStatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : StatementCode(stmt, code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int) override;
    ~DStatementCode() = default;
};

class DLambdaCode : public LambdaCode {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DLambdaCode() = default;
};

class DId : public Id {
   public:
    DId(std::string id) : Id(id) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DId() = default;
};

class DInsert : public Insert {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DInsert() = default;
};

class DRemove : public Remove {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DRemove() = default;
};

class DNew : public New {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DNew() = default;
};

class DContains : public Contains {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DContains() = default;
};

class DLoop : public Loop {
   public:
    DLoop(std::shared_ptr<Node> code) : Loop(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DLoop() = default;
};

class DCall : public Call {
   public:
    ~DCall() {}
    DCall(int id, std::shared_ptr<Node> code) : Call(id, code) {}
    DCall() {}

    void setId(int id) override { this->id = id; }
    void setCode(std::shared_ptr<Node> code) override { this->code = code; }

    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
};

class DSeq : public Seq {
   public:
    DSeq(std::shared_ptr<Node> code) : Seq(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DSeq() = default;
};

class DIf : public If {
   public:
    DIf(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2) : If(c1, c2) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~DIf() = default;
};

#endif
