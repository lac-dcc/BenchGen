#include "languageGenerator.h"


#include "../shared/consts.h"

#include "c/cGenerator.h"
#include "cpp/cppGenerator.h"

ProgrammingLanguageGenerator* ProgrammingLanguageGenerator::getGenerator(std::string language, std::string varType)
{
    if(language == ProgrammingLanguage::C)
    {
        return new CGenerator(varType);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return new CPPGenerator(varType);
    }
}