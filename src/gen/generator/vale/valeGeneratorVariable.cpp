#include "valeGeneratorVariable.h"

ValeGeneratorArray::ValeGeneratorArray(int size, int id) {
    this->typeString = "BenchArray";
    this->totalSize = size;
    this->id = id;
    this->name = "Var" + std::to_string(id);
}

ValeGeneratorArray::~ValeGeneratorArray() {}

// `Var<id> = makeArray(<size>, <id>);` — `makeArray` (emitted in genGlobalVars)
// allocates a zero-filled runtime array. The inFunction flag is irrelevant in
// Vale: there is no caller-owned pool to draw from, allocation is always fresh.
std::vector<std::string> ValeGeneratorArray::new_(bool inFunction) {
    std::string n = this->name;
    std::string sz = std::to_string(this->totalSize);
    std::string idStr = std::to_string(this->id);
    return {n + " = makeArray(" + sz + ", " + idStr + ");"};
}

std::vector<std::string> ValeGeneratorArray::insert() {
    std::string n = this->name;
    std::vector<std::string> temp = {};
    temp.push_back("foreach i in range(0, " + n + ".size) {");
    temp.push_back("   set " + n + ".data[i] = " + n + ".data[i] + 1;");
    temp.push_back("}");
    return temp;
}

std::vector<std::string> ValeGeneratorArray::remove() {
    std::string n = this->name;
    std::vector<std::string> temp = {};
    temp.push_back("foreach i in range(0, " + n + ".size) {");
    temp.push_back("   set " + n + ".data[i] = " + n + ".data[i] - 1;");
    temp.push_back("}");
    return temp;
}

// Vale's `if` inside a `foreach` may move owned values; to keep the array's
// owning reference intact the contains loop only mutates elements in place and
// never returns early, so the shouldReturn flag is ignored.
std::vector<std::string> ValeGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;
    std::string n = this->name;
    std::string cmp = std::to_string(compare);
    std::vector<std::string> temp = {};
    temp.push_back("foreach i in range(0, " + n + ".size) {");
    temp.push_back("   if " + n + ".data[i] == " + cmp + " {");
    temp.push_back("      set " + n + ".data[i] = " + n + ".data[i] + " + cmp + ";");
    temp.push_back("   }");
    temp.push_back("}");
    return temp;
}

// Ownership reclaims the array automatically when the variable goes out of scope.
std::vector<std::string> ValeGeneratorArray::free() {
    return {};
}

// Vale auto-imports the stdlib prelude, so no include directives are needed.
std::vector<std::string> ValeGeneratorArray::genIncludes() {
    return {};
}

// Shared declarations emitted once into bench_types.vale: the array/rng structs
// plus the small runtime helpers the generated code calls.
std::vector<std::string> ValeGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("struct BenchArray { data []<mut>int; size int; id int; }");
    temp.push_back("");
    temp.push_back("// Threaded pseudo-random state. A one-element mutable array is used as a");
    temp.push_back("// mutable cell, since this Vale build does not accept reassignable scalar");
    temp.push_back("// struct members.");
    temp.push_back("struct Rng { state []<mut>int; }");
    temp.push_back("");
    temp.push_back("func imod(a int, b int) int { return a - (a / b) * b; }");
    temp.push_back("");
    temp.push_back("func makeRng(seed int) Rng { return Rng([]int(1, &(i) => { seed })); }");
    temp.push_back("");
    temp.push_back("func nextRand(rng &Rng) int {");
    temp.push_back("   v = imod(rng.state[0] * 1103515245 + 12345, 2147483647);");
    temp.push_back("   set rng.state[0] = v;");
    temp.push_back("   return v;");
    temp.push_back("}");
    temp.push_back("");
    temp.push_back("func nextBool(rng &Rng) bool { return imod(nextRand(rng), 2) == 1; }");
    temp.push_back("");
    temp.push_back("func makeArray(n int, id int) BenchArray {");
    temp.push_back("   return BenchArray([]int(n, &(i) => { 0 }), n, id);");
    temp.push_back("}");
    return temp;
}

// No caller-owned parameter pool in the Vale lowering; functions receive only the
// rng borrow, so there is nothing to materialise here.
std::vector<std::string> ValeGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    return {};
}
