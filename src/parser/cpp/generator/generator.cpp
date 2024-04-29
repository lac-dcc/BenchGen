#include "generator.h"

Generator::Generator(std::string variableType) {
    this->ifCounter.push(0);
    this->varCounter = 0;
    this->varType = variableType;
    mainFunction = GeneratorFunction(-1, true);
    currentFunction.push(&mainFunction);
    currentScope.push(GeneratorScope(0));
    generateIncludes();
    generateGlobalVars();
    generateMainFunction();
}

void Generator::generateIncludes() {
    includes.push_back("#include <stdio.h>");
    includes.push_back("#include <stdlib.h>");
    includes.push_back("#include <random>");
    if (varType == "bool")
        includes.push_back("#include <stdbool.h>");
    else if (varType == "string")
        includes.push_back("#include <string.h>");
    else if (varType == "vector")
        includes.push_back("#include <vector>");
    else if (varType == "list")
        includes.push_back("#include <list>");
}

void Generator::generateGlobalVars() {
    globalVars.push_back("std::mt19937_64 rng{};");
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

void Generator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string funcHeader = "void func" + std::to_string(funcId) + "(";
    for (int i = 0; i < nParameters; i++) {
        funcHeader += "const unsigned long PATH" + std::to_string(i) + ", ";
    }
    if (nParameters > 0) {
        funcHeader.pop_back();
        funcHeader.pop_back();
    }
    funcHeader += ") {";
    func.addLine(funcHeader);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
}

bool Generator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

void Generator::callFunc(int funcId, int nParameters) {
    std::string line = "func" + std::to_string(funcId) + "(";
    for (int i = 0; i < nParameters; i++) {
        line += "rng(), ";
    }
    if (nParameters > 0) {
        line.pop_back();
        line.pop_back();
    }
    line += ");";
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
    ifCounter.pop();
}

void Generator::writeToFile(std::string filename) {
    std::ofstream file;
    file.open(filename);
    // Includes
    for (auto include : includes) {
        file << include << std::endl;
    }
    file << std::endl;
    // Global variables
    for (auto var : globalVars) {
        file << var << std::endl;
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