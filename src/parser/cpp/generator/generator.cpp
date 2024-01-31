#include "generator.h"

#include <fstream>

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
    mainFunction.insert(mainFunction.end() - 1, "   return 0;");
}

void Generator::generateIdCall(string id) {
    currentScope.back()->push_back(id + "();");
}

void Generator::generateDeclaration(string id) {
    vector<string> func;
    func.push_back("void " + id + "() {");
    functions.push_back(func);
    currentScope.push_back(&(functions.back()));
}

void Generator::generateAlloc(int symbol) {
    string line = "";
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
            currentScope.back()->push_back(line);
            currentScope.push_back(currentScope.back());
            break;
        case TOK_LOOP: {
            static int forLevel = 0;
            string var = "i" + std::to_string(forLevel);
            line = "for(int " + var + " = 0; " + var + " < 10; " + var + "++) {";
            forLevel++;
            currentScope.back()->push_back(line);
            currentScope.push_back(currentScope.back());
            break;
        }
        case TOK_CALL: {
            static int funcCount = 0;
            string funcName = "func" + std::to_string(funcCount);
            line = funcName + "();";
            currentScope.back()->push_back(line);

            vector<string> func;
            func.push_back("void " + funcName + "() {");
            functions.push_back(func);
            currentScope.push_back(&(functions.back()));

            funcCount++;
            break;
        }
        case TOK_SEQ:
            line = "";
            break;
    }
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
    // Includes
    for (auto include : includes) {
        file << include << endl;
    }
    file << endl;
    // Headers
    for (auto func : functions) {
        string header = func[0];
        header.pop_back();
        header.pop_back();
        header += ";";
        file << header << endl;
    }
    file << endl;
    // Main function
    for (auto func : mainFunction) {
        file << func << endl;
    }
    file << endl;
    // Functions
    for (auto func : functions) {
        for (auto line : func) {
            file << line << endl;
        }
        file << endl;
    }
    file.close();
}