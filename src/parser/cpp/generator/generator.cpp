#include "generator.h"

Generator::Generator(std::string variableType) {
    this->varCounter = 0;
    this->varType = variableType;
    mainFunction = GeneratorFunction(-1, true);
    currentFunction.push(&mainFunction);
    currentScope.push(GeneratorScope(0));
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
    startScope();
}

void Generator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void Generator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void Generator::startFunc(int funcId) {
    std::string funcName = "func" + std::to_string(funcId);
    GeneratorFunction func = GeneratorFunction(funcId);
    func.addLine("void " + funcName + "() {");
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
}

bool Generator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

void Generator::callFunc(int funcId) {
    std::string funcName = "func" + std::to_string(funcId);
    std::string line = funcName + "();";
    addLine(line);
}

int Generator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void Generator::endScope() {
    std::string line = currentScope.top().getIndentationTabs(-1) + "}";
    currentFunction.top()->addLine(line);

    int addedVars = currentScope.top().addedVars;
    for (int i = 0; i < addedVars; ++i) {
        auto it = variables.end();
        if (it != variables.begin()) {
            --it;
            if (it->second != nullptr)
                delete it->second;
            variables.erase(it);
        }
    }
    currentScope.pop();
    varCounter -= addedVars;
}

void Generator::endFunc() {
    endScope();
    currentFunction.pop();
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