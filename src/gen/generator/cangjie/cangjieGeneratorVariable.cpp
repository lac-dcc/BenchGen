#include "cangjieGeneratorVariable.h"


CangjieGeneratorArray::CangjieGeneratorArray(int size, int id) {
    this->typeString = "ArrayT";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> CangjieGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {"var " + this->name + ": " + this->typeString+";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars.data[pCounter-1].getOrThrow();");
        temp.push_back("   pCounter -= 1;");
        temp.push_back("   " + this->name + ".refC += 1;");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + " = " + this->typeString + "(" +std::to_string(this->totalSize)+","+std::to_string(this->id)+",1)");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + " = " + this->typeString + "(" +std::to_string(this->totalSize)+","+std::to_string(this->id)+",1)");
    }
    return temp;
}

std::vector<std::string> CangjieGeneratorArray::insert() {
    std::vector<std::string> temp = {"for (i in 0.." + this->name + ".size) {"};
    temp.push_back("   " + this->name + ".data[i]+=1;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CangjieGeneratorArray::remove() {
    std::vector<std::string> temp = {"for (i in 0.." + this->name + ".size) {"};
    temp.push_back("   " + this->name + ".data[i]+=1;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CangjieGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back("for (i in 0.." + this->name + ".size) {");
    temp.push_back("   if (" + this->name + ".data[i] == " + std::to_string(compare) + ") { ");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      " + this->name + ".data[i] += " + std::to_string(compare) + ";");
    }
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CangjieGeneratorArray::free() {
    return {};
}

std::vector<std::string> CangjieGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> CangjieGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("struct ArrayT{");
    temp.push_back("   var data: Array<Int64>");
    temp.push_back("   var size: Int64");
    temp.push_back("   var refC: Int64");
    temp.push_back("   var id: Int64");
    temp.push_back("   public init(size: Int64, id: Int64, refC: Int64){");
    temp.push_back("        this.data = Array<Int64>(size, repeat: 0)");
    temp.push_back("        this.size = size");
    temp.push_back("        this.id = id");
    temp.push_back("        this.refC = refC");
    temp.push_back("   }");
    temp.push_back("}");


    temp.push_back("struct ArrayTParam{");
    temp.push_back("   var data: Array<Option<ArrayT>>");
    temp.push_back("   var size: Int64");
    temp.push_back("   public init(size: Int64){");
    temp.push_back("        this.data = Array<Option<ArrayT>>(size, repeat: None)");
    temp.push_back("        this.size = size");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> CangjieGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back("var " + paramName + ": "+this->typeString+"Param;");
    temp.push_back(paramName + "= ArrayTParam("+std::to_string(varsParams.size())+")");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }
    return temp;
}

CangjieGeneratorArray::~CangjieGeneratorArray() {
}