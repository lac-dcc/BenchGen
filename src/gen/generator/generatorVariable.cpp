#include "generatorVariable.h"

unsigned int VariableFactory::var_counter = 0;

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

// ARRAY

GeneratorArray::GeneratorArray(int size, int id) {
    this->typeString = "array_t";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> GeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {this->typeString + "* " + this->name + ";"};
    if (inFunction) {
        temp.push_back("if (pCounter > 0) {");
        temp.push_back("   " + this->name + " = vars->data[--pCounter];");
        temp.push_back("   " + this->name + "->refC++;");
        temp.push_back("   DEBUG_COPY(" + this->name + "->id);");
        temp.push_back("} else {");
        temp.push_back("   " + this->name + " = (" + this->typeString + "*)malloc(sizeof(" + this->typeString + "));");
        temp.push_back("   " + this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back("   " + this->name + "->refC = 1;");
        temp.push_back("   " + this->name + "->id = " + std::to_string(this->id) + ";");
        temp.push_back("   " + this->name + "->data = (unsigned int*)malloc(" + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("   memset(" + this->name + "->data, 0, " + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("   DEBUG_NEW(" + this->name + "->id);");
        temp.push_back("}");
    } else {
        temp.push_back(this->name + " = (" + this->typeString + "*)malloc(sizeof(" + this->typeString + "));");
        temp.push_back(this->name + "->size = " + std::to_string(this->totalSize) + ";");
        temp.push_back(this->name + "->refC = 1;");
        temp.push_back("   " + this->name + "->id = " + std::to_string(this->id) + ";");
        temp.push_back(this->name + "->data = (unsigned int*)malloc(" + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("memset(" + this->name + "->data, 0, " + this->name + "->size*sizeof(unsigned int));");
        temp.push_back("DEBUG_NEW(" + this->name + "->id);");
    }
    return temp;
}

std::vector<std::string> GeneratorArray::insert() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("   " + this->name + "->data[i]++;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GeneratorArray::remove() {
    std::vector<std::string> temp = {"for (int i = 0; i < " + this->name + "->size; i++) {"};
    temp.push_back("   " + this->name + "->data[i]--;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back("for (int i = 0; i < " + this->name + "->size; i++) {");
    temp.push_back("   if (" + this->name + "->data[i] == " + std::to_string(compare) + ") { ");
    if (shouldReturn) {
        temp.push_back("      return " + this->name + ";");
    } else {
        temp.push_back("      " + this->name + "->data[i] += " + std::to_string(compare) + ";");
    }
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GeneratorArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + "->refC--;");
    temp.push_back("if(" + this->name + "->refC == 0) {");
    temp.push_back("   free(" + this->name + "->data);");
    temp.push_back("   free(" + this->name + ");");
    temp.push_back("   DEBUG_FREE(" + this->name + "->id);");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> GeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> GeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("typedef struct {");
    temp.push_back("   unsigned int* data;");
    temp.push_back("   size_t size;");
    temp.push_back("   size_t refC;");
    temp.push_back("    int id;");
    temp.push_back("} " + this->typeString + ";");
    temp.push_back("typedef struct {");
    temp.push_back("   " + this->typeString + "** data;");
    temp.push_back("   size_t size;");
    temp.push_back("} " + this->typeString + "_param;");
    return temp;
}

std::vector<std::string> GeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};
    temp.push_back(this->typeString + "_param " + paramName + ";");
    temp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    temp.push_back(paramName + ".data = (" + this->typeString + "**)malloc(" + paramName + ".size*sizeof(" + this->typeString + "*));");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }
    return temp;
}

GeneratorArray::~GeneratorArray() {
}

// SORTED LIST

GeneratorSortedList::GeneratorSortedList(int id) {
    this->typeString = "sortedlist_t";
    this->id = id;
    this->name = VarTypes::SORTEDLIST + std::to_string(id);
}

GeneratorSortedList::~GeneratorSortedList() {
}

std::vector<std::string> GeneratorSortedList::genIncludes() {
    std::vector<std::string> temp = {};
    temp.push_back("#include <stdbool.h>");
    return temp;
}

std::vector<std::string> GeneratorSortedList::new_(bool inFunction) {
    std::vector<std::string> tmp = {};

    if (inFunction) {
        tmp.push_back("sortedlist_t* " + this->name + ";");
        tmp.push_back("if (pCounter > 0) {");
        tmp.push_back("   " + this->name + " = vars->data[--pCounter];");
        tmp.push_back("   " + this->name + "->refC++;");
        tmp.push_back("   DEBUG_COPY(" + this->name + "->id);");
        tmp.push_back("} else {");
        tmp.push_back("   " + this->name + " = (sortedlist_t*)malloc(sizeof(sortedlist_t));");
        tmp.push_back("   " + this->name + "->refC = 1;");
        tmp.push_back("   " + this->name + "->id = " + std::to_string(this->id) + ";");
        tmp.push_back("   " + this->name + "->n = 0;");
        tmp.push_back("   " + this->name + "->root = NULL;");
        tmp.push_back("   DEBUG_NEW(" + this->name + "->id);");
        tmp.push_back("}");
    } else {
        tmp.push_back("sortedlist_t* " + this->name + " = (sortedlist_t*)malloc(sizeof(sortedlist_t));");
        tmp.push_back(this->name + "->refC = 1;");
        tmp.push_back(this->name + "->id = " + std::to_string(this->id) + ";");
        tmp.push_back(this->name + "->n = 0;");
        tmp.push_back(this->name + "->root = NULL;");
        tmp.push_back("DEBUG_NEW(" + this->name + "->id);");
    }
    return tmp;
}

std::vector<std::string> GeneratorSortedList::insert() {
    std::vector<std::string> tmp = {};

    int value = rand() % 100;

    std::string cell_varname = "cell" + std::to_string(VariableFactory::var_counter);
    std::string tmp_varname = "tmp" + std::to_string(VariableFactory::var_counter);
    std::string int_tmp_varname = "tmp_val" + std::to_string(VariableFactory::var_counter);

    tmp.push_back("if(" + this->name + " != NULL && " + this->name + "->n > 0) {");
    tmp.push_back("     cell_t* " + cell_varname + " = " + this->name + "->root;");
    tmp.push_back("     if(" + this->name + "->n == 0) {");
    tmp.push_back("         " + this->name + "->root = (cell_t*)malloc(sizeof(cell_t));");
    tmp.push_back("         " + this->name + "->root->val  = " + std::to_string(value) + ";");
    tmp.push_back("         " + this->name + "->root->next = NULL;");
    tmp.push_back("         " + this->name + "->n++;");
    tmp.push_back("     } else {");
    tmp.push_back("         while(" + cell_varname + " != NULL)");
    tmp.push_back("         {");
    tmp.push_back("             if(" + cell_varname + "->next == NULL && " + cell_varname + "->val < " + std::to_string(value) + ") {");
    tmp.push_back("                 " + cell_varname + "->next = (cell_t*)malloc(sizeof(cell_t));");
    tmp.push_back("                 " + cell_varname + "->next->next = NULL;");
    tmp.push_back("                 " + cell_varname + "->next->val  = " + std::to_string(value) + ";");
    tmp.push_back("                 " + this->name + "->n++;");
    tmp.push_back("                 break;");
    tmp.push_back("             } else if(" + std::to_string(value) + " < " + cell_varname + "->val) {");
    tmp.push_back("                 cell_t* " + tmp_varname + " = " + cell_varname + "->next;");
    tmp.push_back("                 " + cell_varname + "->next = (cell_t*)malloc(sizeof(cell_t));");
    tmp.push_back("                 " + cell_varname + "->next->next = " + tmp_varname + ";");
    tmp.push_back("                 int " + int_tmp_varname + " = " + cell_varname + "->val;");
    tmp.push_back("                 " + cell_varname + "->val = " + std::to_string(value) + ";");
    tmp.push_back("                 " + cell_varname + "->next->val = " + int_tmp_varname + ";");
    tmp.push_back("                 " + this->name + "->n++;");
    tmp.push_back("                 break;");
    tmp.push_back("             }");
    tmp.push_back("             " + cell_varname + " = " + cell_varname + "->next;");
    tmp.push_back("         }");
    tmp.push_back("     }");
    tmp.push_back("}");
    VariableFactory::var_counter++;
    return tmp;
}

std::vector<std::string> GeneratorSortedList::remove() {
    std::vector<std::string> tmp = {};

    int value = rand() % 100;

    std::string cell_varname = "cell" + std::to_string(VariableFactory::var_counter);

    tmp.push_back("if(" + this->name + " != NULL && " + this->name + "->n > 0)");
    tmp.push_back("{");
    tmp.push_back("    cell_t* " + cell_varname + " = " + this->name + "->root;");
    tmp.push_back("    if(" + cell_varname + "->val == " + std::to_string(value) + ")");
    tmp.push_back("    {");
    tmp.push_back("        " + cell_varname + " = " + cell_varname + "->next;");
    tmp.push_back("        " + this->name + "->n--;");
    tmp.push_back("    }else{");
    tmp.push_back("        while(" + cell_varname + "->next != NULL && " + cell_varname + "->next->val != " + std::to_string(value) + ") " + cell_varname + " = " + cell_varname + "->next;");
    tmp.push_back("        if(" + cell_varname + "->next != NULL)");
    tmp.push_back("        {");
    tmp.push_back("            " + cell_varname + " = " + cell_varname + "->next->next;");
    tmp.push_back("            " + this->name + "->n--;");
    tmp.push_back("        }");
    tmp.push_back("     }");
    tmp.push_back("}");
    VariableFactory::var_counter++;

    return tmp;
}

std::vector<std::string> GeneratorSortedList::contains(bool shouldReturn) {
    std::vector<std::string> tmp = {};
    int value = rand() % 100;

    std::string cell_varname = "cell" + std::to_string(VariableFactory::var_counter);
    tmp.push_back("if(" + this->name + " != NULL && " + this->name + "->n > 0){");
    tmp.push_back("     cell_t* " + cell_varname + " = " + this->name + "->root;");
    tmp.push_back("     while(" + cell_varname + " != NULL && " + cell_varname + "->val != " + std::to_string(value) + ") " + cell_varname + " = " + cell_varname + "->next;");
    if (shouldReturn) {
        tmp.push_back("     return " + cell_varname + " != NULL ? " + this->name + " : NULL;");
    }
    tmp.push_back("}");
    VariableFactory::var_counter++;

    return tmp;
}

std::vector<std::string> GeneratorSortedList::free() {
    std::vector<std::string> tmp = {};

    std::string cell_varname = "cell" + std::to_string(VariableFactory::var_counter);
    std::string tmp_varname = "tmp" + std::to_string(VariableFactory::var_counter);

    tmp.push_back(this->name + "->refC--;");
    tmp.push_back("if(" + this->name + "->refC == 0){");
    tmp.push_back("     cell_t* " + cell_varname + " = " + this->name + "->root;");
    tmp.push_back("     cell_t* " + tmp_varname + "  = NULL;");
    tmp.push_back("     while(" + cell_varname + " != NULL) {");
    tmp.push_back("         " + tmp_varname + " = " + cell_varname + "->next;");
    tmp.push_back("         free(" + cell_varname + ");");
    tmp.push_back("         " + cell_varname + " = " + tmp_varname + ";");
    tmp.push_back("     }");
    tmp.push_back("     free(" + this->name + ");");
    tmp.push_back("     DEBUG_FREE(" + this->name + "->id);");
    tmp.push_back("}");
    VariableFactory::var_counter++;
    return tmp;
}

std::vector<std::string> GeneratorSortedList::genGlobalVars() {
    std::vector<std::string> tmp = {};

    tmp.push_back("typedef struct cell_t {");
    tmp.push_back("     struct cell_t* next;");
    tmp.push_back("     unsigned int val;");
    tmp.push_back("} cell_t;");

    tmp.push_back("typedef struct sortedlist_t {");
    tmp.push_back("     cell_t* root;");
    tmp.push_back("     size_t refC;");
    tmp.push_back("     int id;");
    tmp.push_back("     unsigned int n;");
    tmp.push_back("} sortedlist_t;");

    tmp.push_back("typedef struct {");
    tmp.push_back("   sortedlist_t** data;");
    tmp.push_back("   size_t size;");
    tmp.push_back("} " + this->typeString + "_param;");
    return tmp;
}

std::vector<std::string> GeneratorSortedList::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> tmp = {};
    tmp.push_back(this->typeString + "_param " + paramName + ";");
    tmp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    tmp.push_back(paramName + ".data = (" + this->typeString + "**)malloc(" + paramName + ".size*sizeof(" + this->typeString + "*));");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        tmp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }

    return tmp;
}
