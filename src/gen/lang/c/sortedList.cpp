CSortedList::CSortedList(int id) {
    this->type = "sortedlist_t";
    this->id = id;
    this->name = "sortedlist" + std::to_string(id);
}

CSortedList::~CSortedList() {
}

std::vector<std::string> CSortedList::genIncludes() {
    std::vector<std::string> temp = {};
    temp.push_back("#include <stdbool.h>");
    return temp;
}

std::vector<std::string> CSortedList::new_(bool inFunction) {
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

std::vector<std::string> CSortedList::insert() {
    std::vector<std::string> tmp = {};

    int value = rand() % 100;

    std::string cell_varname = "cell" + std::to_string(var_counter);
    std::string tmp_varname = "tmp" + std::to_string(var_counter);
    std::string int_tmp_varname = "tmp_val" + std::to_string(var_counter);

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
    tmp.push_back("COUNT_INSERT();");
    var_counter++;
    return tmp;
}

std::vector<std::string> CSortedList::remove() {
    std::vector<std::string> tmp = {};

    int value = rand() % 100;

    std::string cell_varname = "cell" + std::to_string(var_counter);

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
    tmp.push_back("COUNT_REMOVE();");
    var_counter++;

    return tmp;
}

std::vector<std::string> CSortedList::contains(bool shouldReturn) {
    std::vector<std::string> tmp = {};
    int value = rand() % 100;

    std::string cell_varname = "cell" + std::to_string(var_counter);
    tmp.push_back("if(" + this->name + " != NULL && " + this->name + "->n > 0){");
    tmp.push_back("     cell_t* " + cell_varname + " = " + this->name + "->root;");
    tmp.push_back("     while(" + cell_varname + " != NULL && " + cell_varname + "->val != " + std::to_string(value) + ") " + cell_varname + " = " + cell_varname + "->next;");
    if (shouldReturn) {
        tmp.push_back("     return " + cell_varname + " != NULL ? " + this->name + " : NULL;");
    }
    tmp.push_back("}");
    tmp.push_back("COUNT_CONTAINS();");
    var_counter++;

    return tmp;
}

std::vector<std::string> CSortedList::free() {
    std::vector<std::string> tmp = {};

    std::string cell_varname = "cell" + std::to_string(var_counter);
    std::string tmp_varname = "tmp" + std::to_string(var_counter);

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
    var_counter++;
    return tmp;
}

std::vector<std::string> CSortedList::genGlobalVars() {
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
    tmp.push_back("} " + this->type + "_param;");
    return tmp;
}

std::vector<std::string> CSortedList::genParams(std::string paramName, std::vector<Variable*> varsParams) {
    std::vector<std::string> tmp = {};
    tmp.push_back(this->type + "_param " + paramName + ";");
    tmp.push_back(paramName + ".size = " + std::to_string(varsParams.size()) + ";");
    tmp.push_back(paramName + ".data = (" + this->type + "**)malloc(" + paramName + ".size*sizeof(" + this->type + "*));");
    for (int i = 0; i < (int)varsParams.size(); i++) {
        tmp.push_back(paramName + ".data[" + std::to_string(i) + "] = " + varsParams[i]->name + ";");
    }

    return tmp;
}
