#include "adaGeneratorVariable.h"

AdaGeneratorArray::AdaGeneratorArray(int size, int id) {
    this->typeString = "Array_T_Access";
    this->totalSize = size;
    this->id = id;
    this->name = "Var" + std::to_string(id);
}

AdaGeneratorArray::~AdaGeneratorArray() {}

std::string AdaGeneratorArray::declaration() {
    return this->name + " : Array_T_Access;";
}

std::vector<std::string> AdaGeneratorArray::new_(bool inFunction) {
    std::string n = this->name;
    std::string sz = std::to_string(this->totalSize);
    std::string idStr = std::to_string(this->id);
    std::vector<std::string> temp = {};
    if (inFunction) {
        temp.push_back("if P_Counter > 0 then");
        temp.push_back("   P_Counter := P_Counter - 1;");
        temp.push_back("   " + n + " := Vars.Data (P_Counter);");
        temp.push_back("   " + n + ".Ref_C := " + n + ".Ref_C + 1;");
        temp.push_back("   Debug_Copy (" + n + ".Id);");
        temp.push_back("else");
        temp.push_back("   " + n + " := new Array_T;");
        temp.push_back("   " + n + ".Size := " + sz + ";");
        temp.push_back("   " + n + ".Ref_C := 1;");
        temp.push_back("   " + n + ".Id := " + idStr + ";");
        temp.push_back("   " + n + ".Data := new Array_Storage (0 .. " + sz + " - 1);");
        temp.push_back("   " + n + ".Data.all := (others => 0);");
        temp.push_back("   Debug_New (" + n + ".Id);");
        temp.push_back("end if;");
    } else {
        temp.push_back(n + " := new Array_T;");
        temp.push_back(n + ".Size := " + sz + ";");
        temp.push_back(n + ".Ref_C := 1;");
        temp.push_back(n + ".Id := " + idStr + ";");
        temp.push_back(n + ".Data := new Array_Storage (0 .. " + sz + " - 1);");
        temp.push_back(n + ".Data.all := (others => 0);");
        temp.push_back("Debug_New (" + n + ".Id);");
    }
    return temp;
}

std::vector<std::string> AdaGeneratorArray::insert() {
    std::string n = this->name;
    std::vector<std::string> temp = {};
    temp.push_back("for I in 0 .. " + n + ".Size - 1 loop");
    temp.push_back("   " + n + ".Data (I) := " + n + ".Data (I) + 1;");
    temp.push_back("end loop;");
    return temp;
}

std::vector<std::string> AdaGeneratorArray::remove() {
    std::string n = this->name;
    std::vector<std::string> temp = {};
    temp.push_back("for I in 0 .. " + n + ".Size - 1 loop");
    temp.push_back("   " + n + ".Data (I) := " + n + ".Data (I) - 1;");
    temp.push_back("end loop;");
    return temp;
}

std::vector<std::string> AdaGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;
    std::string n = this->name;
    std::string cmp = std::to_string(compare);
    std::vector<std::string> temp = {};
    temp.push_back("for I in 0 .. " + n + ".Size - 1 loop");
    temp.push_back("   if " + n + ".Data (I) = " + cmp + " then");
    if (shouldReturn) {
        temp.push_back("      return " + n + ";");
    } else {
        temp.push_back("      " + n + ".Data (I) := " + n + ".Data (I) + " + cmp + ";");
    }
    temp.push_back("   end if;");
    temp.push_back("end loop;");
    return temp;
}

std::vector<std::string> AdaGeneratorArray::free() {
    std::string n = this->name;
    std::vector<std::string> temp = {};
    temp.push_back(n + ".Ref_C := " + n + ".Ref_C - 1;");
    temp.push_back("if " + n + ".Ref_C = 0 then");
    temp.push_back("   Free_Storage (" + n + ".Data);");
    temp.push_back("   Debug_Free (" + n + ".Id);");
    temp.push_back("   Free_Array (" + n + ");");
    temp.push_back("end if;");
    return temp;
}

std::vector<std::string> AdaGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> AdaGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("type Array_Storage is array (Natural range <>) of Unsigned_32;");
    temp.push_back("type Array_Storage_Access is access Array_Storage;");
    temp.push_back("type Array_T is record");
    temp.push_back("   Data  : Array_Storage_Access;");
    temp.push_back("   Size  : Natural;");
    temp.push_back("   Ref_C : Natural;");
    temp.push_back("   Id    : Integer;");
    temp.push_back("end record;");
    temp.push_back("type Array_T_Access is access Array_T;");
    temp.push_back("type Array_T_Ptr_Array is array (Natural range <>) of Array_T_Access;");
    temp.push_back("type Array_T_Ptr_Array_Access is access Array_T_Ptr_Array;");
    temp.push_back("type Array_T_Param is record");
    temp.push_back("   Data : Array_T_Ptr_Array_Access;");
    temp.push_back("   Size : Natural;");
    temp.push_back("end record;");
    return temp;
}

std::vector<std::string> AdaGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::string n = std::to_string(varsParams.size());
    std::vector<std::string> temp = {};
    temp.push_back(paramName + ".Size := " + n + ";");
    temp.push_back(paramName + ".Data := new Array_T_Ptr_Array (0 .. " + n + " - 1);");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".Data (" + std::to_string(i) + ") := " + varsParams[i]->name + ";");
    }
    return temp;
}
