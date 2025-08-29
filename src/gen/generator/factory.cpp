#include "generatorVariable.h"
#include "c/cGeneratorVariable.h"
#include "cpp/cppGeneratorVariable.h"
#include "julia/juliaGeneratorVariable.h"
#include "rust/rustGeneratorVariable.h"
#include "go/goGeneratorVariable.h"

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        if (type == VarTypes::ARRAY) {
            int size = rand() % 1000;  // Random size for the array
            return new CGeneratorArray(size, identifier);
        } else if (type == VarTypes::SORTEDLIST) {
            return new CGeneratorSortedList(identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        if (type == VarTypes::ARRAY) {
            int size = rand() % 1000;  // Random size for the array
            return new CppGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        if (type == VarTypes::ARRAY) {
            int size = rand() % 1000;  // Random size for the array
            return new RustGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        if (type == VarTypes::ARRAY) {
            int size = rand() % 1000;  // Random size for the array
            return new JuliaGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        if (type == VarTypes::ARRAY) {
            int size = rand() % 1000;  // Random size for the array
            return new GoGeneratorArray(size, identifier);
        }
    }
    // TODO: Error Handling
    return nullptr;
}