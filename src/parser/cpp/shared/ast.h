#ifndef AST_H
#define AST_H

#include "enums.h"
#include "typedefs.h"

class Block;
class S;
class Code;
class Structs;
class StructSctructs;
class LambdaStructs;
class Struct;
class AllocationStruct;
class FunctionalStruct;
class IfStruct;
class IdStruct;
class ParamIf;
class StructsParamIf;
class UnderlineParamIf;
class Else;
class StructsElse;
class UnderlineElse;

class Block {
   public:
    int type;

	std::shared_ptr<Code> code;
	std::shared_ptr<Struct> struct_;
	std::shared_ptr<Structs> structs;
	std::string id;
	std::shared_ptr<ParamIf> paramIf;
	std::shared_ptr<Else> else_;

    Block() {}
};

class S : public Block {
   public:
    S(std::shared_ptr<Code> code) {
        type = AST_S;
        this->code = code;
    }
};

class Code : public Block {
   public:
    Code(std::shared_ptr<Struct> struct_, std::shared_ptr<Structs> structs) {
        type = AST_CODE;
        this->struct_ = struct_;
        this->structs = structs;
    }
};

class Structs : public Block {
   public:
    Structs() {}
};

class StructStructs : public Structs {
   public:
    StructStructs(std::shared_ptr<Struct> struct_, std::shared_ptr<Structs> structs) {
        type = AST_STRUCT_STRUCTS;
        this->struct_ = struct_;
        this->structs = structs;
    }
};

class LambdaStructs : public Structs {
   public:
    LambdaStructs() {
        type = AST_LAMBDA_STRUCTS;
    }
};

class Struct : public Block {
   public:
    Struct() {}
};

class AllocationStruct : public Struct {
   public:
    AllocationStruct(int tok) {
        switch (tok) {
            case TOK_INSERT:
                type = AST_INSERT_STRUCT;
                break;
            case TOK_REMOVE:
                type = AST_REMOVE_STRUCT;
                break;
            case TOK_NEW:
                type = AST_NEW_STRUCT;
                break;
            case TOK_DEL:
                type = AST_DEL_STRUCT;
                break;
            case TOK_CONTAINS:
                type = AST_CONTAINS_STRUCT;
                break;
        }
    }
};

class FunctionalStruct : public Struct {
   public:
    FunctionalStruct(int tok, std::shared_ptr<Structs> structs) {
        switch (tok) {
            case TOK_LOOP:
                type = AST_LOOP_STRUCT;
                break;
            case TOK_CALL:
                type = AST_CALL_STRUCT;
                break;
            case TOK_SEQ:
                type = AST_SEQ_STRUCT;
                break;
        }
        this->structs = structs;
    }
};

class IfStruct : public Struct {
   public:
    IfStruct(std::shared_ptr<ParamIf> paramIf) {
        type = AST_IF_STRUCT;
        this->paramIf = paramIf;
    }
};

class IdStruct : public Struct {
   public:
    IdStruct(std::string id) {
        this->id = id;
        type = AST_ID_STRUCT;
    }
};

class ParamIf : public Block {
   public:
    ParamIf() {}
};

class StructsParamIf : public ParamIf {
   public:
    StructsParamIf(std::shared_ptr<Structs> structs, std::shared_ptr<Else> else_) {
        type = AST_STRUCTS_PARAM_IF;
        this->structs = structs;
        this->else_ = else_;
    }
};

class UnderlineParamIf : public ParamIf {
   public:
    UnderlineParamIf(std::shared_ptr<Else> else_) {
        type = AST_UNDERLINE_PARAM_IF;
        this->else_ = else_;
    }
};

class Else : public Block {
   public:
    Else() {}
};

class StructsElse : public Else {
   public:
    StructsElse(std::shared_ptr<Structs> structs) {
        type = AST_STRUCTS_ELSE;
        this->structs = structs;
    }
};

class UnderlineElse : public Else {
   public:
    UnderlineElse() {
        type = AST_UNDERLINE_ELSE;
    }
};

#endif
