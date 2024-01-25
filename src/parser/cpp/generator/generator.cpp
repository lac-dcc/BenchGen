#include "generator.h"

#include <fstream>

using std::endl;
using std::ofstream;

void Generator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    includes.push_back("#include <stdbool.h>");
    includes.push_back("#include <string.h>");
}

void Generator::generateMainFunction() {
    currentScope.back()->push_back("int main() {");
}

void Generator::returnMainFunction() {
    mainFunction.insert(mainFunction.end() - 1, "      return 0;");
}

void Generator::generateIdCall(string id) {
    currentScope.back()->push_back(id + "();");
}

void Generator::generateAtrib(string id) {
    vector<string> func;
    func.push_back("void " + id + "() {");
    functions.push_back(func);
    currentScope.push_back(&functions[functions.size() - 1]);
}

void Generator::generateAlloc(int symbol) {
    string line = "";
    std::cout << "ALLOC GERADO! -> " << symbol << "\n";
    switch (symbol) {
        case TOK_INSERT:
            line = "printf(\"INSERTED!\\n\");";
            break;
        case TOK_REMOVE:
            line = "printf(\"REMOVED!\\n\");";
            break;
        case TOK_DEL:
            line = "printf(\"DELETED!\\n\");";
            break;
        case TOK_NEW:
            line = "printf(\"NEW!\\n\");";
            break;
        case TOK_CONTAINS:
            line = "printf(\"CONTAINS!\\n\");";
            break;
    }
    currentScope.back()->push_back(line);
}

void Generator::generateFunc(int symbol) {
    string line = "";
    switch (symbol) {
        case TOK_IF:
            line = "if(1 < 2) {";
            break;
        case TOK_LOOP: {
            string var = "i" + std::to_string(forLevel);
            line = "for(int " + var + " = 0; " + var + " < 10; " + var + "++) {";
            forLevel++;
            break;
        }
        case TOK_CALL:
            line = "";
            break;
        case TOK_SEQ:
            line = "";
            break;
    }
    currentScope.back()->push_back(line);
    currentScope.push_back(currentScope.back());
}

void Generator::generateElse() {
    currentScope.back()->push_back("else {");
    currentScope.push_back(currentScope.back());
}

void Generator::scopeEnd() {
    currentScope.back()->push_back("}");
    currentScope.pop_back();
}

void Generator::writeToFile(string filename) {
    returnMainFunction();
    ofstream file;
    file.open(filename);
    for (auto include : includes) {
        file << include << endl;
    }
    file << endl;
    for (auto func : functions) {
        for (auto line : func) {
            file << line << endl;
        }
        file << endl;
    }
    file << endl;
    for (auto func : mainFunction) {
        file << func << endl;
    }
    file.close();
}