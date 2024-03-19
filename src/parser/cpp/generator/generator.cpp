#include "generator.h"

void Generator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    includes.push_back("#include <stdbool.h>");
    includes.push_back("#include <string.h>");
}

void Generator::generateMainFunction() {
    mainFunction.addLine("int main() {");
}

void Generator::returnMainFunction() {
    functionEnd();
    mainFunction.insertReturn(0);
}

void Generator::generateIdCall(std::string id) {
    // TODO: What to do with ids?
}

void Generator::generateInsert() {
    std::string line = currentScope.back().getIndentationTabs() + "printf(\"INSERTED!\\n\");";
    currentFunction.back()->addLine(line);
}

void Generator::generateRemove() {
    std::string line = currentScope.back().getIndentationTabs() + "printf(\"REMOVE!\\n\");";
    currentFunction.back()->addLine(line);
}

void Generator::generateDel() {
    std::string line = currentScope.back().getIndentationTabs() + "printf(\"DEL!\\n\");";
    currentFunction.back()->addLine(line);
}

void Generator::generateNew() {
    std::string line = currentScope.back().getIndentationTabs() + "printf(\"NEW!\\n\");";
    currentFunction.back()->addLine(line);
}

void Generator::generateContains() {
    std::string line = currentScope.back().getIndentationTabs() + "printf(\"CONTAINS!\\n\");";
    currentFunction.back()->addLine(line);
}

void Generator::generateIf() {
    std::string line = currentScope.back().getIndentationTabs() + "if(1 < 2) {";
    currentFunction.back()->addLine(line);
    GeneratorScope scope(currentScope.back().getVars(), currentScope.back().getIndentation() + 1);
    currentScope.push_back(scope);
}

void Generator::generateLoop() {
    static int forLevel = 0;
    GeneratorVar gVar;
    gVar.letter = "i";
    gVar.number = forLevel;
    std::string var = gVar.letter + std::to_string(gVar.number);
    std::string forLine = "for(int " + var + " = 0; " + var + " < 10; " + var + "++) {";
    std::string line = currentScope.back().getIndentationTabs() + forLine;
    forLevel++;
    currentFunction.back()->addLine(line);
    GeneratorScope scope(currentScope.back().getVars(), currentScope.back().getIndentation() + 1);
    scope.addVar(gVar);
    currentScope.push_back(scope);
}

void Generator::generateCall() {
    static int funcCount = 0;
    std::string funcName = "func" + std::to_string(funcCount);
    std::string line = currentScope.back().getIndentationTabs() + funcName + "();";
    currentFunction.back()->addLine(line);
    GeneratorFunction func = GeneratorFunction();
    func.addLine("void " + funcName + "() {");
    functions.push_back(func);
    currentFunction.push_back(&(functions.back()));

    GeneratorScope scope = GeneratorScope();
    currentScope.push_back(scope);

    funcCount++;
}

void Generator::generateElse() {
    std::string line = currentScope.back().getIndentationTabs(-1) + "else {";
    currentFunction.back()->addLine(line);
    GeneratorScope scope(currentScope.back().getVars(), currentScope.back().getIndentation() + 1);
    currentScope.push_back(scope);
}

void Generator::scopeEnd() {
    std::string line = currentScope.back().getIndentationTabs(-1) + "}";
    currentFunction.back()->addLine(line);
    currentScope.pop_back();
}

void Generator::functionEnd() {
    scopeEnd();
    currentFunction.pop_back();
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
