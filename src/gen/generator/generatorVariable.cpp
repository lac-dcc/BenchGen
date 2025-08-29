#include "generatorVariable.h"

#include "c/cGeneratorVariable.h"
#include "cpp/cppGeneratorVariable.h"
#include "go/goGeneratorVariable.h"
#include "julia/juliaGeneratorVariable.h"
#include "rust/rustGeneratorVariable.h"

unsigned int VariableFactory::var_counter = 0;


GeneratorSortedList::GeneratorSortedList() {};
GeneratorSortedList::GeneratorSortedList(int id){};
GeneratorSortedList::~GeneratorSortedList(){};
GeneratorArray::GeneratorArray() {};
GeneratorArray::GeneratorArray(int totalSize, int id) {};
GeneratorArray::~GeneratorArray() {};

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
    }
}

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
