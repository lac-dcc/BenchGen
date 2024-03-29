#include "generator.h"

Generator::Generator() {
    mainFunction = GeneratorFunction(true);
    currentFunction.push_back(&mainFunction);
    currentScope.push_back(GeneratorScope());
    generateIncludes();
    generateMainFunction();
}

void Generator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    includes.push_back("#include <stdbool.h>");
    includes.push_back("#include <string.h>");
}

void Generator::generateMainFunction() {
    mainFunction.addLine("int main() {");
    mainFunction.addLine("   return 0;");
    mainFunction.addLine("}");
}

void Generator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.back().getIndentationTabs(d) + line;
    currentFunction.back()->addLine(indentedLine);
}

void Generator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.back().getVarCounter(), currentScope.back().getIndentation() + 1);
    currentScope.push_back(scope);
}

void Generator::startFunc() {
    int funcNumber = functions.size();
    std::string funcName = "func" + std::to_string(funcNumber);
    std::string line = funcName + "();";
    addLine(line);
    GeneratorFunction func = GeneratorFunction();
    func.addLine("void " + funcName + "() {");
    functions.push_back(func);
    currentFunction.push_back(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push_back(scope);
}

int Generator::addVar() {
    return currentScope.back().addVar();
}

int Generator::getVars() {
    return currentScope.back().getVarCounter();
}

void Generator::endScope() {
    std::string line = currentScope.back().getIndentationTabs(-1) + "}";
    currentFunction.back()->addLine(line);
    currentScope.pop_back();
}

void Generator::endFunc() {
    endScope();
    currentFunction.pop_back();
}

void Generator::writeToFile(std::string filename) {
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