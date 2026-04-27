#include "generatorVariable.h"
#include "c/cGeneratorVariable.h"
#include "cpp/cppGeneratorVariable.h"
#include "julia/juliaGeneratorVariable.h"
#include "mlir/mlirGeneratorVariable.h"
#include "rust/rustGeneratorVariable.h"
#include "go/goGeneratorVariable.h"
#include "v/vGeneratorVariable.h"
#include "carbon/carbonGeneratorVariable.h"
#include "zig/zigGeneratorVariable.h"
#include "odin/odinGeneratorVariable.h"
#include "d/dGeneratorVariable.h"
#include "../shared/consts.h"

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    int size = rand() % 1000;

    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        if (type == VarTypes::ARRAY) {
            
            return new CGeneratorArray(size, identifier);
        } else if (type == VarTypes::SORTEDLIST) {
            return new CGeneratorSortedList(identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        if (type == VarTypes::ARRAY) {
            return new CppGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        if (type == VarTypes::ARRAY) {
            return new RustGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        if (type == VarTypes::ARRAY) {
            return new JuliaGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        if (type == VarTypes::ARRAY) {
            return new GoGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        if (type == VarTypes::ARRAY) {
            return new VGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        if (type == VarTypes::ARRAY) {
            return new CarbonGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        if (type == VarTypes::ARRAY) {
            return new ZigGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        if (type == VarTypes::ARRAY) {
            return new OdinGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        if (type == VarTypes::ARRAY) {
            return new DGeneratorArray(size, identifier);
        }
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        if (type == VarTypes::SCALAR) {
            return new MlirGeneratorScalar(size, identifier);
        }
    }
    // TODO: Error Handling
    return nullptr;
}
