#include "generatorVariable.h"

#include "c/cGeneratorVariable.h"
#include "cpp/cppGeneratorVariable.h"
#include "go/goGeneratorVariable.h"
#include "julia/juliaGeneratorVariable.h"
#include "rust/rustGeneratorVariable.h"
#include "v/vGeneratorVariable.h"
#include "carbon/carbonGeneratorVariable.h"
#include "zig/zigGeneratorVariable.h"
#include "odin/odinGeneratorVariable.h"
#include "d/dGeneratorVariable.h"
#include "mlir/mlirGeneratorVariable.h"

unsigned int VariableFactory::var_counter = 0;


GeneratorSortedList::GeneratorSortedList() {};
GeneratorSortedList::GeneratorSortedList(int id){};
GeneratorSortedList::~GeneratorSortedList(){};
GeneratorArray::GeneratorArray() {};
GeneratorArray::GeneratorArray(int totalSize, int id) {};
GeneratorArray::~GeneratorArray() {};

GeneratorScalar::GeneratorScalar() {};
GeneratorScalar::~GeneratorScalar() {};


std::vector<std::string> GeneratorSortedList::new_(bool inFunction)
{
    return CGeneratorSortedList().new_(inFunction);
}

std::vector<std::string>  GeneratorSortedList::insert()
{
    return CGeneratorSortedList().insert();
}

std::vector<std::string>  GeneratorSortedList::remove()
{
    return CGeneratorSortedList().remove();  
}

std::vector<std::string>  GeneratorSortedList::contains(bool shouldReturn)
{
    return CGeneratorSortedList().contains(shouldReturn);
}

std::vector<std::string>  GeneratorSortedList::free()
{
    return CGeneratorSortedList().free();
}

std::vector<std::string>  GeneratorSortedList::genIncludes()
{
    return CGeneratorSortedList().genIncludes();
}

std::vector<std::string>  GeneratorSortedList::genGlobalVars()
{
    return CGeneratorSortedList().genGlobalVars();
}

std::vector<std::string>  GeneratorSortedList::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams)
{
    return CGeneratorSortedList().genParams(paramName, varsParams);
}

std::vector<std::string> GeneratorArray::new_(bool inFunction)
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().new_(inFunction);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().new_(inFunction);
    }
}


std::vector<std::string>  GeneratorArray::insert()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().insert();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().insert();
    }
}

std::vector<std::string>  GeneratorArray::remove()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().remove();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().remove();
    }
}

std::vector<std::string>  GeneratorArray::contains(bool shouldReturn)
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return CppGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().contains(shouldReturn);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().contains(shouldReturn);
    }
}

std::vector<std::string>  GeneratorArray::free()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().free();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().free();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return CppGeneratorArray().free(); 
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().free();   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().free();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().free();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().free();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().free();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().free();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().free();
    }
}

std::vector<std::string>  GeneratorArray::genIncludes()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().genIncludes();   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().genIncludes();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().genIncludes();
    }
}

std::vector<std::string>  GeneratorArray::genGlobalVars()
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().genGlobalVars();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().genGlobalVars();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustGeneratorArray().genGlobalVars();   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().genGlobalVars();   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().genGlobalVars();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().genGlobalVars();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().genGlobalVars();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().genGlobalVars();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().genGlobalVars();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().genGlobalVars();
    }
}

std::vector<std::string>  GeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams)
{
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        return CGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        return CppGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return RustGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return JuliaGeneratorArray().genParams(paramName, varsParams);   
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return GoGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return VGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return CarbonGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return ZigGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return OdinGeneratorArray().genParams(paramName, varsParams);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return DGeneratorArray().genParams(paramName, varsParams);
    }
}


std::vector<std::string> GeneratorScalar::new_(bool inFunction) {;
    return MlirGeneratorScalar().new_(inFunction);
}

std::vector<std::string> GeneratorScalar::arithmetic(std::string opt) {
    return MlirGeneratorScalar().arithmetic(opt);
}

std::vector<std::string> GeneratorScalar::conditional() {
    return MlirGeneratorScalar().conditional();
}

std::vector<std::string> GeneratorScalar::logical(bool shouldReturn) {
    return MlirGeneratorScalar().logical(shouldReturn);
}

std::vector<std::string> GeneratorScalar::free() {
    return MlirGeneratorScalar().free();
}

std::vector<std::string> GeneratorScalar::unary(std::string op) {
    return MlirGeneratorScalar().unary(op);
}

std::vector<std::string> GeneratorScalar::select(bool shouldReturn) {
    return MlirGeneratorScalar().select(shouldReturn);
}

std::vector<std::string> GeneratorScalar::logical_sc(bool shouldReturn) {
    return MlirGeneratorScalar().logical_sc(shouldReturn);
}


std::vector<std::string> GeneratorScalar::incdec(bool isInc) {
    return MlirGeneratorScalar().incdec(isInc);
}

std::vector<std::string> GeneratorScalar::reduction() {
    return MlirGeneratorScalar().reduction();
}

std::vector<std::string> GeneratorScalar::call(std::string funcName) {
    return MlirGeneratorScalar().call(funcName);
}

std::vector<std::string> GeneratorScalar::insert() {
    return {};
}
std::vector<std::string> GeneratorScalar::remove() {
    return {};
}
std::vector<std::string> GeneratorScalar::contains(bool shouldReturn) {
    return {};
}
std::vector<std::string> GeneratorScalar::genIncludes() {
    return {};
}
std::vector<std::string> GeneratorScalar::genGlobalVars() {
    return {};
}
std::vector<std::string> GeneratorScalar::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {}

std::string VariableFactory::genTypeString(std::string type) {
    GeneratorVariable* var = createVariable(type, 0);
    std::string typeString = var->typeString;
    delete var;
    return typeString;
}

std::vector<std::string> VariableFactory::genIncludes(std::string type) {
    GeneratorVariable* var = createVariable(type, 0);
    std::vector<std::string> includes = var->genIncludes();
    delete var;
    return includes;
}

std::vector<std::string> VariableFactory::genGlobalVars(std::string type) {
    GeneratorVariable* var = createVariable(type, 0);
    std::vector<std::string> globalVars = var->genGlobalVars();
    delete var;
    return globalVars;
}

std::vector<std::string> VariableFactory::genParams(std::string type, std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    GeneratorVariable* var = createVariable(type, 0);
    std::vector<std::string> params = var->genParams(paramName, varsParams);
    delete var;
    return params;
}
