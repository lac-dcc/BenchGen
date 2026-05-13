#ifndef NIMAST_H
#define NIMAST_H

#include <cmath>

#include "../../generator/languageGenerator.h"
#include "../../shared/enums.h"
#include "../../shared/globalStructs.h"
#include "../languageAst.h"

void nimprintIndentationSpaces(int indent);
std::string nimgenerateIfCondition(ProgrammingLanguageGenerator& generator);

class NimStatementCode : public StatementCode {
   public:
    NimStatementCode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code) : StatementCode(stmt, code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int) override;
    ~NimStatementCode() = default;
};

class NimLambdaCode : public LambdaCode {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimLambdaCode() = default;
};

class NimId : public Id {
   public:
    NimId(std::string id) : Id(id) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimId() = default;
};

class NimInsert : public Insert {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimInsert() = default;
};

class NimRemove : public Remove {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimRemove() = default;
};

class NimNew : public New {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimNew() = default;
};

class NimContains : public Contains {
   public:
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimContains() = default;
};

class NimLoop : public Loop {
   public:
    NimLoop(std::shared_ptr<Node> code) : Loop(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimLoop() = default;
};

class NimCall : public Call {
   public:
    ~NimCall() {}
    NimCall(int id, std::shared_ptr<Node> code) : Call(id, code) {}
    NimCall() {}
    void setId(int id) override { this->id = id; }
    void setCode(std::shared_ptr<Node> code) override { this->code = code; }
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
};

class NimSeq : public Seq {
   public:
    NimSeq(std::shared_ptr<Node> code) : Seq(code) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimSeq() = default;
};

class NimIf : public If {
   public:
    NimIf(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2) : If(c1, c2) {}
    void gen(ProgrammingLanguageGenerator&) override;
    void print(int indent) override;
    ~NimIf() = default;
};

#endif
