#include "languageAst.h"
#include "c/cAst.h"

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

Insert get_insert(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CInsert();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CInsert();
    }
}

Remove get_remove(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CRemove();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CRemove();
    }
}

New get_new(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CNew();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CNew();
    }
}

Contains get_contains(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CContains();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CContains();
    }
}


StatementCode get_statementcode(std::string language, std::shared_ptr<Node> stmt, std::shared_ptr<Node> code)
{
    if(language == ProgrammingLanguage::C)
    {
        return CStatementCode(stmt, code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CStatementCode(stmt, code);
    }
}


Loop get_loop(std::string language, std::shared_ptr<Node> code)
{
    if(language == ProgrammingLanguage::C)
    {
        return CLoop(code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CLoop(code);
    }
}

Call get_call(std::string language)
{
    if(language == ProgrammingLanguage::C)
    {
        return CCall();
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CCall();
    }
}

Call get_call(std::string language, int id, std::shared_ptr<Node> code)
{
    if(language == ProgrammingLanguage::C)
    {
        return CCall(id, code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CCall(id, code);
    }
}


Seq get_seq(std::string language, std::shared_ptr<Node> code)
{
      if(language == ProgrammingLanguage::C)
    {
        return CSeq(code);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CSeq(code);
    }
}

If get_if(std::string language, std::shared_ptr<Node> c1, std::shared_ptr<Node> c2)
{
      if(language == ProgrammingLanguage::C)
    {
        return CIf(c1, c2);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CIf(c1, c2);
    }
}

Id get_id(std::string language, std::string id)
{
      if(language == ProgrammingLanguage::C)
    {
        return CId(id);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return CId(id);
    }
}

void Loop::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLoop(this->code).gen(generator);
    }
};

void Loop::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLoop(this->code).print(0);
    }
};

void Call::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CCall ccall = CCall(this->id, this->code);
        ccall.conditionalCounts = this->conditionalCounts;
        ccall.gen(generator);
    }
};

void Call::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CCall ccall = CCall(this->id, this->code);
        ccall.conditionalCounts = this->conditionalCounts;
        ccall.print(0);
    }
};

void Call::setId(int id){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        this->id = id;
    }
};

void Call::setCode(std::shared_ptr<Node> code){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        this->code = code;
    }
};

void Seq::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CSeq(this->code).gen(generator);
    }
};

void Seq::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CSeq(this->code).print(0);
    }
 };


void If::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CIf(this->c1, this->c2).gen(generator);
    }
};

void If::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CIf(this->c1, this->c2).print(0);
    }
};

void Id::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CId(this->id).gen(generator);
    }  
};

void Id::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CId(this->id).print(0);
    }  
};

void Insert::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CInsert().gen(generator);
    }
};


void Insert::print(int) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CInsert().print(0);
    }    
};

void Remove::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CRemove().gen(generator);
    }
};

void Remove::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CRemove().print(0);
    }    
};

void New::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CNew().gen(generator);
    }
};

void New::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CNew().print(0);
    }
 };

void Contains::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CContains().gen(generator);
    }
};

void Contains::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CContains().print(0);
    }
 };

void StatementCode::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CStatementCode(this->stmt, this->code).gen(generator);
    }
};


void StatementCode::print(int) { 

    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CStatementCode(this->stmt, this->code).print(0);
    }
};

void LambdaCode::gen(ProgrammingLanguageGenerator& generator) {
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLambdaCode().gen(generator);
    }
};

void LambdaCode::print(int) { 
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CLambdaCode().print(0);
    }
};