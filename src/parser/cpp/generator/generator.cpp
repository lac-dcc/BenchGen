#include "generator.h"

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
    scopeEnd();
    mainFunction.insert(mainFunction.end() - 1, "   return 0;");
}

void Generator::generateIdCall(std::string id) {
    // TODO: What to do with ids?
}

void Generator::generateInsert() {
    currentScope.back()->push_back("printf(\"INSERTED!\\n\");");
}

void Generator::generateRemove() {
    currentScope.back()->push_back("printf(\"REMOVED!\\n\");");
}

void Generator::generateDel() {
    currentScope.back()->push_back("printf(\"DELETED!\\n\");");
}

void Generator::generateNew() {
    currentScope.back()->push_back("printf(\"NEW!\\n\");");
}

void Generator::generateContains() {
    currentScope.back()->push_back("printf(\"CONTAINS!\\n\");");
}

void Generator::generateIf() {
    currentScope.back()->push_back("if(1 < 2) {");
    currentScope.push_back(currentScope.back());
}

void Generator::generateLoop() {
    static int forLevel = 0;
    std::string var = "i" + std::to_string(forLevel);
    std::string line = "for(int " + var + " = 0; " + var + " < 10; " + var + "++) {";
    forLevel++;
    currentScope.back()->push_back(line);
    currentScope.push_back(currentScope.back());
}

void Generator::generateCall() {
    static int funcCount = 0;
    std::string funcName = "func" + std::to_string(funcCount);
    std::string line = funcName + "();";
    currentScope.back()->push_back(line);

    std::vector<std::string> func;
    func.push_back("void " + funcName + "() {");
    functions.push_back(func);
    currentScope.push_back(&(functions.back()));

    funcCount++;
}

void Generator::generateElse() {
    currentScope.back()->push_back("else {");
    currentScope.push_back(currentScope.back());
}

void Generator::scopeEnd() {
    currentScope.back()->push_back("}");
    currentScope.pop_back();
}

void Generator::writeToFile(std::string filename) {
    returnMainFunction();
    std::ofstream file;
    file.open(filename);
    // Includes
    for (auto include : includes) {
        file << include << std::endl;
    }
    file << std::endl;
    // Headers
    for (auto func : functions) {
        std::string header = func[0];
        header.pop_back();
        header.pop_back();
        header += ";";
        file << header << std::endl;
    }
    file << std::endl;
    // Main function
    for (auto func : mainFunction) {
        file << func << std::endl;
    }
    file << std::endl;
    // Functions
    for (auto func : functions) {
        for (auto line : func) {
            file << line << std::endl;
        }
        file << std::endl;
    }
    file.close();
}
