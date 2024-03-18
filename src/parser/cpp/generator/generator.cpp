#include "generator.h"

void Generator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    includes.push_back("#include <stdbool.h>");
    includes.push_back("#include <string.h>");
}

void Generator::generateMainFunction() {
    currentScope.back()->addLine("int main() {");
}

void Generator::returnMainFunction() {
    scopeEnd();
    mainFunction.insertReturn(0);
}

void Generator::generateIdCall(std::string id) {
    // TODO: What to do with ids?
}

void Generator::generateInsert() {
    currentScope.back()->addLine("printf(\"INSERTED!\\n\");");
}

void Generator::generateRemove() {
    currentScope.back()->addLine("printf(\"REMOVED!\\n\");");
}

void Generator::generateDel() {
    currentScope.back()->addLine("printf(\"DELETED!\\n\");");
}

void Generator::generateNew() {
    currentScope.back()->addLine("printf(\"NEW!\\n\");");
}

void Generator::generateContains() {
    currentScope.back()->addLine("printf(\"CONTAINS!\\n\");");
}

void Generator::generateIf() {
    currentScope.back()->addLine("if(1 < 2) {");
    currentScope.push_back(currentScope.back());
}

void Generator::generateLoop() {
    static int forLevel = 0;
    GeneratorVar gVar;
    gVar.letter = "i";
    gVar.number = forLevel;
    std::string var = gVar.letter + std::to_string(gVar.number);
    std::string line = "for(int " + var + " = 0; " + var + " < 10; " + var + "++) {";
    forLevel++;
    GeneratorScope newScope = *currentScope.back();
    newScope.addVar(gVar);
    newScope.addLine(line);
    currentScope.push_back(std::move(&newScope));
}

void Generator::generateCall() {
    static int funcCount = 0;
    std::string funcName = "func" + std::to_string(funcCount);
    std::string line = funcName + "();";
    currentScope.back()->addLine(line);
    GeneratorScope func(currentScope.back()->getVars());
    func.addLine("void " + funcName + "() {");
    functions.push_back(func);
    currentScope.push_back(&(functions.back()));

    funcCount++;
}

void Generator::generateElse() {
    currentScope.back()->addLine("else {");
    currentScope.push_back(currentScope.back());
}

void Generator::scopeEnd() {
    currentScope.back()->addLine("}");
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
        std::string header = func.getLines()[0];
        header.pop_back();
        header.pop_back();
        header += ";";
        file << header << std::endl;
    }
    file << std::endl;
    // Main function
    auto lines = mainFunction.getLines();
    for (auto line : lines) {
        file << line << std::endl;
    }
    file << std::endl;
    // Functions
    for (auto func : functions) {
        lines = func.getLines();
        for (auto line : lines) {
            file << line << std::endl;
        }
        file << std::endl;
    }
    file.close();
}
