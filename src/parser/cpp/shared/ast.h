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
class InsertStruct;
class RemoveStruct;
class NewStruct;
class DelStruct;
class ContainsStruct;
class LoopStruct;
class CallStruct;
class SeqStruct;
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
    Block() {}
};

class S : public Block {
   public:
    shared_ptr<Code> code;

    S(shared_ptr<Code> code) : code(code) {
        type = AST_S;
    }
};

class Code : public Block {
   public:
    shared_ptr<Struct> struct_;
    shared_ptr<Structs> structs;

    Code(shared_ptr<Struct> struct_, shared_ptr<Structs> structs) : struct_(struct_), structs(structs) {
        type = AST_CODE;
    }
};

class Structs : public Block {
   public:
    shared_ptr<Struct> struct_;
    shared_ptr<Structs> structs;
    Structs() {}
};

class StructStructs : public Structs {
   public:
    StructStructs(shared_ptr<Struct> struct_, shared_ptr<Structs> structs) {
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
    shared_ptr<Structs> structs;
    shared_ptr<ParamIf> paramIf;

    Struct() {}
};

class InsertStruct : public Struct {
   public:
    InsertStruct() {
        type = AST_INSERT_STRUCT;
    }
};

class RemoveStruct : public Struct {
   public:
    RemoveStruct() {
        type = AST_REMOVE_STRUCT;
    }
};

class NewStruct : public Struct {
   public:
    NewStruct() {
        type = AST_NEW_STRUCT;
    }
};

class DelStruct : public Struct {
   public:
    DelStruct() {
        type = AST_DEL_STRUCT;
    }
};

class ContainsStruct : public Struct {
   public:
    ContainsStruct() {
        type = AST_CONTAINS_STRUCT;
    }
};

class LoopStruct : public Struct {
   public:
    LoopStruct(shared_ptr<Structs> structs) {
        type = AST_LOOP_STRUCT;
        this->structs = structs;
    }
};

class CallStruct : public Struct {
   public:
    CallStruct(shared_ptr<Structs> structs) {
        type = AST_CALL_STRUCT;
        this->structs = structs;
    }
};

class SeqStruct : public Struct {
   public:
    SeqStruct(shared_ptr<Structs> structs) {
        type = AST_SEQ_STRUCT;
        this->structs = structs;
    }
};

class IfStruct : public Struct {
   public:
    IfStruct(shared_ptr<ParamIf> paramIf) {
        type = AST_IF_STRUCT;
        this->paramIf = paramIf;
    }
};

class IdStruct : public Struct {
   public:
    IdStruct() {
        type = AST_ID_STRUCT;
    }
};

class ParamIf : public Block {
   public:
    shared_ptr<Structs> structs;
    shared_ptr<Else> else_;
    ParamIf() {}
};

class StructsParamIf : public ParamIf {
   public:
    StructsParamIf(shared_ptr<Structs> structs, shared_ptr<Else> else_) {
        type = AST_STRUCTS_PARAM_IF;
        this->structs = structs;
        this->else_ = else_;
    }
};

class UnderlineParamIf : public ParamIf {
   public:
    UnderlineParamIf(shared_ptr<Else> else_) {
        type = AST_UNDERLINE_PARAM_IF;
        this->else_ = else_;
    }
};

class Else : public Block {
   public:
    shared_ptr<Structs> structs;
    Else() {}
};

class StructsElse : public Else {
   public:
    StructsElse(shared_ptr<Structs> structs) {
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