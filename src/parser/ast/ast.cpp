#include "ast.h"

void printIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string generateIfCondition(Generator& generator) {
    bool isMain = generator.currentFunction.top()->isMainFunction;
    if (isMain) {
        return "rng() & 1";
    }
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    int bit = std::pow(2, ifCounter % 64);
    std::string condition = "PATH" + std::to_string(pathNumber) + " & " + std::to_string(bit);
    return condition;
}

// Gens

void StatementCode::gen(Generator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void LambdaCode::gen(Generator& generator) {
}

void Id::gen(Generator& generator) {
    // TODO: What to do with ids?
}

void Insert::gen(Generator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0)
        return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    for (std::string line : lines) {
        generator.addLine(line);
    }
}

void Remove::gen(Generator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0)
        return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    for (std::string line : lines) {
        generator.addLine(line);
    }
}

void New::gen(Generator& generator) {
    int id = generator.addVar(generator.varType);
    generator.addLine(generator.variables[id]->eval());
}

void Del::gen(Generator& generator) {
    std::string line = "printf(\"d\");";
    generator.addLine(line);
}

void Contains::gen(Generator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0)
        return;
    int varPos = rand() % varCount;

    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains();
    for (std::string line : lines) {
        generator.addLine(line);
    }
}

void Loop::gen(Generator& generator) {
    std::string loopVar = "loop" + std::to_string(generator.loopCounter);
    std::string loopVarLine = "int " + loopVar + " = 0;";
    generator.addLine(loopVarLine);

    std::string loopLimitVar = "loopLimit" + std::to_string(generator.loopCounter);
    std::string loopLimitValue = "(rand()%10)/" + std::to_string(generator.loopLevel + 1) + " + 1";
    std::string loopLimitLine = "int " + loopLimitVar + " = " + loopLimitValue + ";";
    generator.addLine(loopLimitLine);

    std::string forLine = "for(; " + loopVar + " < " + loopLimitVar + "; " + loopVar + "++) {";
    generator.addLine(forLine);

    generator.startScope();
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.endScope();
    generator.loopLevel--;
}

void Call::gen(Generator& generator) {
    int nParameters = std::ceil(conditionalCounts / 64.0);
    generator.callFunc(id, nParameters);
    if (!generator.functionExists(id)) {
        generator.startFunc(id, nParameters);
        code->gen(generator);
        generator.endFunc();
    }
}

void Seq::gen(Generator& generator) {
    // TODO: What to do with sequences?
}

void If::gen(Generator& generator) {
    ifParam->gen(generator);
}

void IfParam::gen(Generator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if(" + condition + ") {";
    generator.addLine(line);
    generator.startScope();
    code->gen(generator);
    generator.endScope();
    else_->gen(generator);
}

void NoParamIf::gen(Generator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if(" + condition + ") {}";
    generator.addLine(line);
    else_->gen(generator);
}

void CodeElse::gen(Generator& generator) {
    std::string line = "else {";
    generator.addLine(line);
    generator.startScope();
    code->gen(generator);
    generator.endScope();
}

void NoCodeElse::gen(Generator& generator) {
}

// Prints

void StatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void LambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void Id::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void Insert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void Remove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void New::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void Del::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Del" << std::endl;
}

void Contains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void Loop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void Call::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void Seq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void If::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    ifParam->print(ident + 2);
}

void IfParam::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "IfParam" << std::endl;
    code->print(ident + 2);
    else_->print(ident + 2);
}

void NoParamIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "NoParamIf" << std::endl;
    else_->print(ident + 2);
}

void CodeElse::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "CodeElse" << std::endl;
    code->print(ident + 2);
}

void NoCodeElse::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "NoCodeElse" << std::endl;
}