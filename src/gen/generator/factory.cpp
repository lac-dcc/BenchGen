#include "generatorVariable.h"
#include "c/cGeneratorVariable.h"
#include "cpp/cppGeneratorVariable.h"
#include "julia/juliaGeneratorVariable.h"
#include "rust/rustGeneratorVariable.h"
#include "go/goGeneratorVariable.h"
#include "../shared/consts.h"

int ratio_factor = 1;

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    int iterations = Parameters::ITERATIONS;

    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        if (type == VarTypes::ARRAY) {
            int size = (int)(iterations*2000)/ratio_factor;
            return new CGeneratorArray(size, identifier);
        } else if (type == VarTypes::SORTEDLIST) {
            return new CGeneratorSortedList(identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        if (type == VarTypes::ARRAY) {
            int size = (int)(iterations*2000)/ratio_factor;
            return new CppGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        if (type == VarTypes::ARRAY) {
            int size = (int)(iterations*2000)/ratio_factor;
            return new RustGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        if (type == VarTypes::ARRAY) {
            int size = (int)(iterations*2000)/ratio_factor;
            return new JuliaGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        if (type == VarTypes::ARRAY) {
            int size = (int)(iterations*2000)/ratio_factor;
            return new GoGeneratorArray(size, identifier);
        }
    }

    ratio_factor++;
    // TODO: Error Handling
    return nullptr;
}