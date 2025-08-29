#include "goGeneratorVariable.h"


GoGeneratorArray::GoGeneratorArray(int size, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> GoGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {"var " + this->name + " *"+this->typeString};
    if (inFunction) {
     temp.push_back("if pCounter > 0 {");
     temp.push_back("    " + this->name + " = vars.Data[pCounter-1]");
     temp.push_back("    pCounter--");
     temp.push_back("    " + this->name + ".RefC++");
   //  temp.push_back("    DebugCopy(" + this->name + ".Id)");
     temp.push_back("} else {");
     temp.push_back("    " + this->name + " = &" + this->typeString + "{");
     temp.push_back("        Size: " + std::to_string(this->totalSize) + ",");
     temp.push_back("        RefC: 1,");
     temp.push_back("        Id: " + std::to_string(this->id) + ",");
     temp.push_back("        Data: make([]uint32, " + std::to_string(this->totalSize) + "),");
     temp.push_back("    }");
    // temp.push_back("    DebugNew(" + this->name + ".Id)");
     temp.push_back("}");
    } else {
        temp.push_back(this->name + " = &" + this->typeString + "{");
        temp.push_back("    Size: " + std::to_string(this->totalSize) + ",");
        temp.push_back("    RefC: 1,");
        temp.push_back("    Id: " + std::to_string(this->id) + ",");
        temp.push_back("    Data: make([]uint32, " + std::to_string(this->totalSize) + "),");
        temp.push_back("}");
        //temp.push_back("DebugNew(" + this->name + ".Id)");
    }
return temp;
}

std::vector<std::string> GoGeneratorArray::insert() {
    std::vector<std::string> temp = {
    "for i := 0; i < " + this->name + ".Size; i++ {"
    };
    temp.push_back("    " + this->name + ".Data[i] = uint32(i)");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GoGeneratorArray::remove() {
    std::vector<std::string> temp = {
    "for i := 0; i < " + this->name + ".Size; i++ {"
    };
    temp.push_back("    " + this->name + ".Data[i]--");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GoGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back("for i := 0; i < " + this->name + ".Size; i++ {");
    temp.push_back("    if " + this->name + ".Data[i] == " + std::to_string(compare) + " {");
    if (shouldReturn) {
        temp.push_back("        return " + this->name);
    } else {
        temp.push_back("        " + this->name + ".Data[i] += " + std::to_string(compare));
    }
    temp.push_back("    }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GoGeneratorArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".RefC--");
    temp.push_back("if " + this->name + ".RefC == 0 {");
    temp.push_back("    " + this->name + ".Data = nil");
    temp.push_back("    " + this->name + " = nil");
   // temp.push_back("    DebugFree(" + this->name + ".Id)");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GoGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> GoGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("type Array struct {");
    temp.push_back("    Data []uint32");
    temp.push_back("    Size int");
    temp.push_back("    RefC int");
    temp.push_back("    Id   int");
    temp.push_back("}");
    temp.push_back("type ArrayParam struct {");
    temp.push_back("    Data []*Array");
    temp.push_back("    Size int");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GoGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back("var " + paramName + " " + this->typeString + "Param");
    temp.push_back(paramName + ".Size = " + std::to_string(varsParams.size()));
    temp.push_back(paramName + ".Data = make([]*" + this->typeString + ", " + paramName + ".Size)");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".Data[" + std::to_string(i) + "] = " + varsParams[i]->name);
    }
    return temp;
}

GoGeneratorArray::~GoGeneratorArray() {
}