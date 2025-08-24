#include "juliaGeneratorVariable.h"

// ARRAY

JuliaGeneratorArray::JuliaGeneratorArray(int size, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> JuliaGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {};
    if (inFunction) {
       temp.push_back("let mut "+this->name+".data = Array::new_infunction(&mut vars, &mut counter,"+std::to_string(this->totalSize)+","+this->name + "->id);");
    } else {
       temp.push_back("let mut "+this->name+".data = Array::new_outfunc("+std::to_string(this->totalSize)+","+this->name + "->id);");
    }
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::insert() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".insert();");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::remove() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".remove();");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".contains("+std::to_string(compare)+",true);");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".free();");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> JuliaGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("mutable struct Array");
    temp.push_back("    data::Vector{UInt32}");
    temp.push_back("    size::Int");
    temp.push_back("    refC::Int");
    temp.push_back("    id::Int\n");
    temp.push_back("    function Array()");
    temp.push_back("        new(UInt32[], 0, 0, 0)");
    temp.push_back("    end");
    temp.push_back("end\n");
    temp.push_back("mutable struct Array_param{T}");
    temp.push_back("    data::Vector{Ptr{T}}");
    temp.push_back("    size::Int\n");
    temp.push_back("    function Array_param{T}() where T");
    temp.push_back("        new(Vector{Ptr{T}}(), 0)");
    temp.push_back("    end");
    temp.push_back("end");

    return temp;
}

std::vector<std::string> JuliaGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};

    temp.push_back("let mut "+paramName+".data = Array_param { data: Vec::with_capacity("+std::to_string(varsParams.size())+"), };");

    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName+".data.push("+varsParams[i]->name+");");
    }
    return temp;
}

JuliaGeneratorArray::~JuliaGeneratorArray() {
}