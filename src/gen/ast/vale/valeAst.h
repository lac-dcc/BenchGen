#ifndef VALEAST_H
#define VALEAST_H

#include <cmath>

#include "../../generator/languageGenerator.h"
#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../languageAst.h"

void valeprintIndentationSpaces(int indent);
std::string valegenerateIfCondition(ProgrammingLanguageGenerator& generator);

class ValeStatementCode : public StatementCode {
   public:
    ValeStatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : StatementCode(stmt, code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int) override;
    ~ValeStatementCode() = default;
};

class ValeLambdaCode : public LambdaCode {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeLambdaCode() = default;
};

class ValeId : public Id {
   public:
    ValeId(std::string id) : Id(id) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeId() = default;
};

class ValeInsert : public Insert {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeInsert() = default;
};

class ValeRemove : public Remove {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeRemove() = default;
};

class ValeNew : public New {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeNew() = default;
};

class ValeContains : public Contains {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeContains() = default;
};

class ValeLoop : public Loop {
   public:
    ValeLoop(std::shared_ptr<Node> code) : Loop(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeLoop() = default;
};

class ValeCall : public Call {
   public:
    ~ValeCall() {}
    ValeCall(int id, std::shared_ptr<Node> code) : Call(id, code) {}
    ValeCall() {}
    void setId(int id) override { this->id = id; }
    void setCode(std::shared_ptr<Node> code) override { this->code = code; }
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
};

class ValeSeq : public Seq {
   public:
    ValeSeq(std::shared_ptr<Node> code) : Seq(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeSeq() = default;
};

class ValeIf : public If {
   public:
    ValeIf(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2) : If(c1, c2) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~ValeIf() = default;
};

#endif
