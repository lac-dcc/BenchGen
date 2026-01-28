#include "array.h"

#include <format>
using std::format;
using std::string;

string CArray::Variable::type = "array_t";

string CArray::genIncludes() {
    return "";
}

string CArray::genGlobalVars() {
    return format(R"(
typedef struct {{
   unsigned int* data;
   size_t size;
   size_t refC;
    int id;
}} {0};

typedef struct {{
   {0}** data;
   size_t size;
}} {0}_param;
)", type);
}

CArray::CArray(int id, int totalSize) {
    this->id = id;
    this->totalSize = totalSize;
    this->name = format("array{}", id);
}

string CArray::new_(bool inFunction) {
    string tmp = format("{}* {};", this->type, this->name);
    if (inFunction) {
        tmp += format(R"(
if (pCounter > 0) {{
   {0} = vars->data[--pCounter];
   {0}->refC++;
   DEBUG_COPY({0}->id);
}} else {{
   {0} = ({1}*)malloc(sizeof({1}));
   {0}->size = {2};
   {0}->refC = 1;
   {0}->id = {3};
   {0}->data = (unsigned int*)malloc({0}->size*sizeof(unsigned int));
   memset({0}->data, 0, {0}->size*sizeof(unsigned int));
   DEBUG_NEW({0}->id);
}}
)", this->name, this->type, this->totalSize, this->id);
    } else {
        tmp += format(R"(
{0} = ({1}*)malloc(sizeof({1}));
{0}->size = {2};
{0}->refC = 1;
{0}->id = {3};
{0}->data = (unsigned int*)malloc({0}->size*sizeof(unsigned int));
memset({0}->data, 0, {0}->size*sizeof(unsigned int));
DEBUG_NEW({0}->id);
)", this->name, this->type, this->totalSize, this->id);
    }
    return tmp;
}

string CArray::insert() {
    string tmp = format(R"(
for (int i = 0; i < {0}->size; i++) {{
   {0}->data[i]++;
}}
COUNT_INSERT();
)", this->name);
    return tmp;
}

string CArray::remove() {
    string tmp = format(R"(
for (int i = 0; i < {0}->size; i++) {{
   {0}->data[i]--;
}}
COUNT_REMOVE();
)", this->name);
    return tmp;
}

string CArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    string tmp = format(R"(
for (int i = 0; i < {0}->size; i++) {{
   if ({0}->data[i] == {1}) {{
)", this->name, compare);

    if (shouldReturn) {
        tmp += format("      return {};", this->name);
    } else {
        tmp += format("      {}->data[i] += {};", this->name, compare);
    }

    tmp += R"(
   }
}
COUNT_CONTAINS();
)";
    return tmp;
}

string CArray::free() {
    return format(R"(
{0}->refC--;
if({0}->refC == 0) {{
   free({0}->data);
   free({0});
   DEBUG_FREE({0}->id);
}})", this->name);
}

string CArray::genParams(std::string paramName, std::vector<Variable*> varsParams) {
    string tmp = format(R"(
{0}_param {1};
{1}.size = {2};
{1}.data = ({0}**)malloc({1}.size*sizeof({0}*));
)", type, paramName, varsParams.size());
    for (int i = 0; i < (int)varsParams.size(); i++) {
        tmp += format("{}.data[{}] = {};\n", paramName, i, varsParams[i]->name);
    }
    return tmp;
}

CArray::~CArray() {
} 
