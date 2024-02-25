#ifndef AST_H
#define AST_H

#include "enums.h"
#include "typedefs.h"

class Block;
class Code;
class Instruction;
class IfParam;
class Else;

class Block {
   public:
    int type;

    std::shared_ptr<Instruction> instruction;
    std::shared_ptr<Code> code;
    std::string id;
    std::shared_ptr<IfParam> ifParam;
    std::shared_ptr<Else> else_;

    virtual void codegen() = 0;
};

class Code : public Block {
   public:
    Code(std::shared_ptr<Instruction> instruction, std::shared_ptr<Code> code) {
        type = AST_CODE;
        this->instruction = instruction;
        this->code = code;
    }

    Code() {
        type = AST_LAMBDA;
    }

    void codegen() override {
    }
};

class Instruction : public Block {
   public:
    Instruction(std::string id) {
        type = AST_ID;
        this->id = id;
    }

    Instruction(int tokenType) {
        switch (tokenType) {
            case TOK_INSERT:
                type = AST_INSERT;
                break;
            case TOK_REMOVE:
                type = AST_REMOVE;
                break;
            case TOK_NEW:
                type = AST_NEW;
                break;
            case TOK_DEL:
                type = AST_DEL;
                break;
            case TOK_CONTAINS:
                type = AST_CONTAINS;
                break;
            default:
                // TODO: Error handling
                break;
        }
    }

    Instruction(int tokenType, std::shared_ptr<Code> code) {
        switch (tokenType) {
            case TOK_LOOP:
                type = AST_LOOP;
                break;
            case TOK_CALL:
                type = AST_CALL;
                break;
            case TOK_SEQ:
                type = AST_SEQ;
                break;
            default:
                // TODO: Error handling
                break;
        }
        this->code = code;
    }

    Instruction(std::shared_ptr<IfParam> ifParam) {
        type = AST_IF;
        this->ifParam = ifParam;
    }

    void codegen() override {
    }
};

class IfParam : public Block {
   public:
    IfParam(std::shared_ptr<Code> code, std::shared_ptr<Else> else_) {
        type = AST_IF_PARAM;
        this->code = code;
        this->else_ = else_;
    }

    IfParam(std::shared_ptr<Else> else_) {
        type = AST_IF_UNDERLINE;
        this->else_ = else_;
    }

    void codegen() override {
    }
};

class Else : public Block {
   public:
    Else(std::shared_ptr<Code> code) {
        type = AST_ELSE_CODE;
        this->code = code;
    }

    Else() {
        type = AST_ELSE_UNDERLINE;
    }

    void codegen() override {
    }
};

#endif
