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
#include "nim/nimGeneratorVariable.h"
#include "ada/adaGeneratorVariable.h"
#include "mlir/mlirGeneratorVariable.h"
#include "cangjie/cangjieGeneratorVariable.h"

unsigned int VariableFactory::var_counter = 0;

GeneratorSortedList::GeneratorSortedList() {};
GeneratorSortedList::GeneratorSortedList(int id){};
GeneratorSortedList::~GeneratorSortedList(){};

GeneratorArray::GeneratorArray() {};
GeneratorArray::GeneratorArray(int totalSize, int id) {};
GeneratorArray::~GeneratorArray() {};

GeneratorScalar::GeneratorScalar() {};
GeneratorScalar::~GeneratorScalar() {};

// --- Implementações de GeneratorSortedList ---
std::vector<std::string> GeneratorSortedList::new_(bool inFunction) { return CGeneratorSortedList().new_(inFunction); }
std::vector<std::string> GeneratorSortedList::insert() { return CGeneratorSortedList().insert(); }
std::vector<std::string> GeneratorSortedList::remove() { return CGeneratorSortedList().remove(); }
std::vector<std::string> GeneratorSortedList::contains(bool shouldReturn) { return CGeneratorSortedList().contains(shouldReturn); }
std::vector<std::string> GeneratorSortedList::free() { return CGeneratorSortedList().free(); }
std::vector<std::string> GeneratorSortedList::genIncludes() { return CGeneratorSortedList().genIncludes(); }
std::vector<std::string> GeneratorSortedList::genGlobalVars() { return CGeneratorSortedList().genGlobalVars(); }
std::vector<std::string> GeneratorSortedList::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) { return CGeneratorSortedList().genParams(paramName, varsParams); }

// --- Implementações de GeneratorArray ---
std::vector<std::string> GeneratorArray::new_(bool inFunction) {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().new_(inFunction);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().new_(inFunction);
    return {};
}

std::vector<std::string> GeneratorArray::insert() {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().insert();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().insert();
    return {};
}

std::vector<std::string> GeneratorArray::remove() {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().remove();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().remove();
    return {};
}

std::vector<std::string> GeneratorArray::contains(bool shouldReturn) {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().contains(shouldReturn);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().contains(shouldReturn);
    return {};
}

std::vector<std::string> GeneratorArray::free() {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().free();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().free();
    return {};
}

std::vector<std::string> GeneratorArray::genIncludes() {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().genIncludes();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().genIncludes();
    return {};
}

std::vector<std::string> GeneratorArray::genGlobalVars() {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().genGlobalVars();
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().genGlobalVars();
    return {};
}

std::vector<std::string> GeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C) return CGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP) return CppGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST) return RustGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA) return JuliaGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO) return GoGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V) return VGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON) return CarbonGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG) return ZigGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN) return OdinGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM) return NimGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D) return DGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ADA) return AdaGeneratorArray().genParams(paramName, varsParams);
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CANGJIE) return CangjieGeneratorArray().genParams(paramName, varsParams);
    return {};
}

// --- Implementações de GeneratorScalar ---
std::vector<std::string> GeneratorScalar::new_(bool inFunction) { return MlirGeneratorScalar().new_(inFunction); }
std::vector<std::string> GeneratorScalar::arithmetic(std::string opt) { return MlirGeneratorScalar().arithmetic(opt); }
std::vector<std::string> GeneratorScalar::conditional() { return MlirGeneratorScalar().conditional(); }
std::vector<std::string> GeneratorScalar::logical(bool shouldReturn) { return MlirGeneratorScalar().logical(shouldReturn); }
std::vector<std::string> GeneratorScalar::free() { return MlirGeneratorScalar().free(); }
std::vector<std::string> GeneratorScalar::unary(std::string op) { return MlirGeneratorScalar().unary(op); }
std::vector<std::string> GeneratorScalar::select(bool shouldReturn) { return MlirGeneratorScalar().select(shouldReturn); }
std::vector<std::string> GeneratorScalar::logical_sc(bool shouldReturn) { return MlirGeneratorScalar().logical_sc(shouldReturn); }
std::vector<std::string> GeneratorScalar::incdec(bool isInc) { return MlirGeneratorScalar().incdec(isInc); }
std::vector<std::string> GeneratorScalar::reduction() { return MlirGeneratorScalar().reduction(); }
std::vector<std::string> GeneratorScalar::call(std::string funcName) { return MlirGeneratorScalar().call(funcName); }
std::vector<std::string> GeneratorScalar::insert() { return {}; }
std::vector<std::string> GeneratorScalar::remove() { return {}; }
std::vector<std::string> GeneratorScalar::contains(bool shouldReturn) { return {}; }
std::vector<std::string> GeneratorScalar::genIncludes() { return {}; }
std::vector<std::string> GeneratorScalar::genGlobalVars() { return {}; }
std::vector<std::string> GeneratorScalar::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) { return {}; }

// --- Factory ---
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