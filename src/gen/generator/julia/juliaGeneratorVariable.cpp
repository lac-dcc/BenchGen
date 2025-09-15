#include "juliaGeneratorVariable.h"

// ARRAY

JuliaGeneratorArray::JuliaGeneratorArray(int size, int id) {
    this->typeString = "JArray";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> JuliaGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {this->name+" = nothing"};
    
    if (inFunction) {
       temp.push_back("if pCounter > 1");
       temp.push_back("    "+this->name+" = vars.data[pCounter]");
       temp.push_back("    pCounter -= 1");
       temp.push_back("    "+this->name+".refC += 1");
    //   temp.push_back("    debug_copy("+this->name+".id)");
       temp.push_back("else");
       temp.push_back("    "+this->name+" = JArray(zeros(Int, "+std::to_string(this->totalSize)+"), "+std::to_string(this->totalSize)+", 1, "+std::to_string(this->id)+")");
    //   temp.push_back("    debug_new("+this->name+".id)");
       temp.push_back("end");
    } else {
       temp.push_back(this->name+" = JArray(zeros(Int, "+std::to_string(this->totalSize)+"),"+std::to_string(this->totalSize)+", 1, "+std::to_string(this->id)+")");
      // temp.push_back("debug_new("+this->name+".id)");
    }
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::insert() {
    std::vector<std::string> temp = {"for i in 0:(" + this->name + ".size-1) "};
    temp.push_back("   " + this->name + ".data[i+1] += 1");
    temp.push_back("end");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::remove() {
    std::vector<std::string> temp = {"for i in 0:(" + this->name + ".size-1) "};
    temp.push_back("   " + this->name + ".data[i+1] -= 1");
    temp.push_back("end");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back("for i in 1:"+this->name+".size");
    temp.push_back("    if "+this->name+".data[i] == "+std::to_string(compare));
    if (shouldReturn) {
        temp.push_back("            return "+this->name);
    } else {
        temp.push_back("            "+this->name+".data[i] += "+std::to_string(compare));
    }
    temp.push_back("   end");
    temp.push_back("end");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name+".refC -= 1");
    temp.push_back("if "+this->name+".refC == 0");
    temp.push_back("    empty!("+this->name+".data)"); 
   // temp.push_back("    debug_free("+this->name+".id)");   
    temp.push_back("    "+this->name+" = nothing");
    temp.push_back("end");
    return temp;
}


std::vector<std::string> JuliaGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> JuliaGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("using Random");
    temp.push_back("mutable struct JArray");
    temp.push_back("    data::Vector{Int}");
    temp.push_back("    size::Int");
    temp.push_back("    refC::Int");
    temp.push_back("    id::Int\n");
    temp.push_back("    function JArray()");
    temp.push_back("        new(Int[], 0, 0, 0)");
    temp.push_back("    end");
    temp.push_back("    function JArray(data::Vector{Int}, size::Int, refC::Int, id::Int)");
    temp.push_back("        new(data, size, refC, id)");
    temp.push_back("    end");
    temp.push_back("end\n");
    temp.push_back("mutable struct JArray_param{Int}");
    temp.push_back("    data::Vector{JArray}");
    temp.push_back("    size::Int\n");
    temp.push_back("    function JArray_param{Int}() where Int");
    temp.push_back("        new(Vector{JArray}(), 0)");
    temp.push_back("    end");
    temp.push_back("end");
    

    return temp;
}

std::vector<std::string> JuliaGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};

    temp.push_back(paramName+" = JArray_param{Int}()");
    temp.push_back(paramName+".size = "+std::to_string(varsParams.size()));
    //temp.push_back("resize!("+paramName+".data, "+std::to_string(varsParams.size())+")");
    
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back("push!("+paramName+".data, "+varsParams[i]->name+")");
        temp.push_back(paramName+".size += 1");
    }
    return temp;
}

JuliaGeneratorArray::~JuliaGeneratorArray() {
}