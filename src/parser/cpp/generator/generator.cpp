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
    currentFunction.back()->addLine("printf(\"INSERTED!\\n\");");
}

void Generator::generateRemove() {
    currentFunction.back()->addLine("printf(\"REMOVED!\\n\");");
}

void Generator::generateDel() {
    currentFunction.back()->addLine("printf(\"DELETED!\\n\");");
}

void Generator::generateNew() {
    currentFunction.back()->addLine("printf(\"NEW!\\n\");");
}

void Generator::generateContains() {
    currentFunction.back()->addLine("printf(\"CONTAINS!\\n\");");
}

void Generator::generateIf() {
    currentFunction.back()->addLine("if(1 < 2) {");
    GeneratorScope scope(currentScope.back().getVars());
    currentScope.push_back(scope);
}

void Generator::generateLoop() {
    static int forLevel = 0;
    GeneratorVar gVar;
    gVar.letter = "i";
    gVar.number = forLevel;
    std::string var = gVar.letter + std::to_string(gVar.number);
    std::string line = "for(int " + var + " = 0; " + var + " < 10; " + var + "++) {";
    forLevel++;
    currentFunction.back()->addLine(line);
    GeneratorScope scope(currentScope.back().getVars());
    scope.addVar(gVar);
    currentScope.push_back(scope);
}

void Generator::generateCall() {
    static int funcCount = 0;
    std::string funcName = "func" + std::to_string(funcCount);
    std::string line = funcName + "();";
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
    currentFunction.back()->addLine("else {");
    GeneratorScope scope(currentScope.back().getVars());
    currentScope.push_back(scope);
}

void Generator::scopeEnd() {
    currentFunction.back()->addLine("}");
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
