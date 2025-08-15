#include "languageAst.h"
#include "c/cAst.h"
#include "cpp/cppAst.h"
#include "rust/rustAst.h"

Insert::~Insert() {};
Remove::~Remove() {};
New::~New() {};
Contains::~Contains() {};
StatementCode::~StatementCode() {};
Loop::~Loop() {};
Call::~Call() {};
Seq::~Seq() {};
If::~If() {};
Id::~Id(){};
LambdaCode::~LambdaCode(){};

void printIndentationSpaces(int ident)
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        cprintIndentationSpaces(ident);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        cppprintIndentationSpaces(ident);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        rustprintIndentationSpaces(ident);
    }
}


std::string generateIfCondition(ProgrammingLanguageGenerator& generator)
{
   if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return cgenerateIfCondition(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return cppgenerateIfCondition(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return rustgenerateIfCondition(generator);
    }
}

Insert get_insert()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CInsert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppInsert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustInsert();
    }
}

Remove get_remove()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CRemove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppRemove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustRemove();
    }
}

New get_new()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CNew();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppNew();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustNew();
    }
}

Contains get_contains()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CContains();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppContains();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustContains();
    }
}


StatementCode get_statementcode(std::shared_ptr<Node> stmt, std::shared_ptr<Node> code)
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CStatementCode(stmt, code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppStatementCode(stmt, code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustStatementCode(stmt, code);
    }
}


Loop get_loop(std::shared_ptr<Node> code)
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CLoop(code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppLoop(code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustLoop(code);
    }
}

Call get_call()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CCall();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppCall();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustCall();
    }
}

Call get_call(int id, std::shared_ptr<Node> code)
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CCall(id, code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppCall(id, code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustCall(id, code);
    }
}


Seq get_seq(std::shared_ptr<Node> code)
{
      if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CSeq(code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppSeq(code);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustSeq(code);
    }
}

If get_if(std::shared_ptr<Node> c1, std::shared_ptr<Node> c2)
{
      if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CIf(c1, c2);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppIf(c1, c2);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustIf(c1, c2);
    }
}

Id get_id(std::string id)
{
      if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CId(id);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppId(id);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustId(id);
    }
}

void Loop::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLoop(this->code).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLoop(this->code).gen(generator);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustLoop(this->code).gen(generator);
    }
};

void Loop::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLoop(this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLoop(this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustLoop(this->code).print(0);
    }
};

void Call::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CCall ccall = CCall(this->id, this->code);
        ccall.conditionalCounts = this->conditionalCounts;
        ccall.gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppCall cppcall = CppCall(this->id, this->code);
        cppcall.conditionalCounts = this->conditionalCounts;
        cppcall.gen(generator);  
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustCall rustcall = RustCall(this->id, this->code);
        rustcall.conditionalCounts = this->conditionalCounts;
        rustcall.gen(generator); 
    }
};

void Call::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CCall ccall = CCall(this->id, this->code);
        ccall.conditionalCounts = this->conditionalCounts;
        ccall.print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppCall cppcall = CppCall(this->id, this->code);
        cppcall.conditionalCounts = this->conditionalCounts;
        cppcall.print(0);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustCall rustcall = RustCall(this->id, this->code);
        rustcall.conditionalCounts = this->conditionalCounts;
        rustcall.print(0);   
    }
};

void Call::setId(int id){
    this->id = id;
};

void Call::setCode(std::shared_ptr<Node> code){
    this->code = code;
};

void Seq::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CSeq(this->code).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppSeq(this->code).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustSeq(this->code).gen(generator);
    }
};

void Seq::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CSeq(this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppSeq(this->code).print(0);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustSeq(this->code).print(0);
    }
 };


void If::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CIf(this->c1, this->c2).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppIf(this->c1, this->c2).gen(generator);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustIf(this->c1, this->c2).gen(generator);
    }
};

void If::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CIf(this->c1, this->c2).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppIf(this->c1, this->c2).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustIf(this->c1, this->c2).print(0);
    }
};

void Id::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CId(this->id).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppId(this->id).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustId(this->id).gen(generator);
    }
};

void Id::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CId(this->id).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppId(this->id).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustId(this->id).print(0);
    }  
};

void Insert::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CInsert().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppInsert().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustInsert().gen(generator);
    }
};


void Insert::print(int) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CInsert().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppInsert().print(0);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustInsert().print(0);
    }    
};

void Remove::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CRemove().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppRemove().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustRemove().gen(generator);
    } 
};

void Remove::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CRemove().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppRemove().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustRemove().print(0);
    } 
};

void New::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CNew().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppNew().gen(generator);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustNew().gen(generator);
    } 
};

void New::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CNew().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppNew().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustNew().print(0);
    }
 };

void Contains::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CContains().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppContains().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustContains().gen(generator);
    }
};

void Contains::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CContains().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppContains().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustContains().print(0);
    }
 };

void StatementCode::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CStatementCode(this->stmt, this->code).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppStatementCode(this->stmt, this->code).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustStatementCode(this->stmt, this->code).gen(generator);
    }
};


void StatementCode::print(int) { 

    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CStatementCode(this->stmt, this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppStatementCode(this->stmt, this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustStatementCode(this->stmt, this->code).print(0);
    }
};

void LambdaCode::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLambdaCode().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLambdaCode().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustLambdaCode().gen(generator);
    }
};

void LambdaCode::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLambdaCode().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLambdaCode().print(0);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustLambdaCode().print(0);
    }
};