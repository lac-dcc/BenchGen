#include "languageGenerator.h"


#include "../shared/consts.h"

#include "c/cGenerator.h"
#include "cpp/cppGenerator.h"

ProgrammingLanguageGenerator::ProgrammingLanguageGenerator(){};
ProgrammingLanguageGenerator::~ProgrammingLanguageGenerator(){};

void ProgrammingLanguageGenerator::addLine(std::vector<std::string> lines, int d){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).addLine(lines, d);
    }
};

void ProgrammingLanguageGenerator::addLine(std::string line, int d){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).addLine(line, d);
    }
};

void ProgrammingLanguageGenerator::startScope(){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).startScope();
    }
};

void ProgrammingLanguageGenerator::startFunc(int funcId, int nParameters){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).startFunc(funcId, nParameters);
    }
};

bool ProgrammingLanguageGenerator::functionExists(int funcId){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).functionExists(funcId);
    }
};

void ProgrammingLanguageGenerator::callFunc(int funcId, int nParameters){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).callFunc(funcId, nParameters);
    }
};

int ProgrammingLanguageGenerator::addVar(std::string type){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).addVar(type);
    }
};

void ProgrammingLanguageGenerator::freeVars(bool hasReturn, int returnVarPos){

    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }
};


void ProgrammingLanguageGenerator::returnFunc(int returnVarPos){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).returnFunc(returnVarPos);
    }
};

void ProgrammingLanguageGenerator::endScope(){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).endScope();
    }
};

void ProgrammingLanguageGenerator::endFunc(){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).endFunc();
    }
};


void ProgrammingLanguageGenerator::generateFiles(std::string benchmarkName){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).generateFiles(benchmarkName);
    }
};

ProgrammingLanguageGenerator* ProgrammingLanguageGenerator::getGenerator(std::string language, std::string varType)
{
    if(language == ProgrammingLanguage::C)
    {
        return new CGenerator(varType);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return new CGenerator(varType);
    }

    return nullptr;
}