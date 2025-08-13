#include "languageAst.h"
#include "c/cAst.h"
#include "cpp/cppAst.h"

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
    } 
}

Insert get_insert(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CInsert();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppInsert();
    }
}

Remove get_remove(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CRemove();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppRemove();
    }
}

New get_new(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CNew();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppNew();
    }
}

Contains get_contains(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CContains();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppContains();
    }
}


StatementCode get_statementcode(std::string language, std::shared_ptr<Node> stmt, std::shared_ptr<Node> code)
{
    if(language == ProgrammingLanguage::C)
    {
        return CStatementCode(stmt, code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppStatementCode(stmt, code);
    }
}


Loop get_loop(std::string language, std::shared_ptr<Node> code)
{
    if(language == ProgrammingLanguage::C)
    {
        return CLoop(code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppLoop(code);
    }
}

Call get_call(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CCall();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppCall();
    }
}

Call get_call(std::string language, int id, std::shared_ptr<Node> code)
{
    if(language == ProgrammingLanguage::C)
    {
        return CCall(id, code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppCall(id, code);
    }
}


Seq get_seq(std::string language, std::shared_ptr<Node> code)
{
      if(language == ProgrammingLanguage::C)
    {
        return CSeq(code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppSeq(code);
    }
}

If get_if(std::string language, std::shared_ptr<Node> c1, std::shared_ptr<Node> c2)
{
      if(language == ProgrammingLanguage::C)
    {
        return CIf(c1, c2);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppIf(c1, c2);
    }
}

Id get_id(std::string language, std::string id)
{
      if(language == ProgrammingLanguage::C)
    {
        return CId(id);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CppId(id);
    }
}

void Loop::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLoop(this->code).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLoop(this->code).gen(generator);   
    }
};

void Loop::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLoop(this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLoop(this->code).print(0);
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
    }
};

void Seq::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CSeq(this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppSeq(this->code).print(0);   
    }
 };


void If::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CIf(this->c1, this->c2).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppIf(this->c1, this->c2).gen(generator);   
    }
};

void If::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CIf(this->c1, this->c2).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppIf(this->c1, this->c2).print(0);
    }
};

void Id::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CId(this->id).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppId(this->id).gen(generator);
    }  
};

void Id::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CId(this->id).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppId(this->id).print(0);
    }  
};

void Insert::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CInsert().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppInsert().gen(generator);
    }
};


void Insert::print(int) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CInsert().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppInsert().print(0);   
    }    
};

void Remove::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CRemove().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppRemove().gen(generator);
    }
};

void Remove::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CRemove().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppRemove().print(0);
    }    
};

void New::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CNew().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppNew().gen(generator);   
    }
};

void New::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CNew().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppNew().print(0);
    }
 };

void Contains::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CContains().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppContains().gen(generator);
    }
};

void Contains::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CContains().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppContains().print(0);
    }
 };

void StatementCode::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CStatementCode(this->stmt, this->code).gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppStatementCode(this->stmt, this->code).gen(generator);
    }
};


void StatementCode::print(int) { 

    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CStatementCode(this->stmt, this->code).print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppStatementCode(this->stmt, this->code).print(0);
    }
};

void LambdaCode::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLambdaCode().gen(generator);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLambdaCode().gen(generator);
    }
};

void LambdaCode::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLambdaCode().print(0);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppLambdaCode().print(0);   
    }
};