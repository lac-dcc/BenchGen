#include "nimAst.h"
#include "../languageAst.h"

void nimprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string nimgenerateIfCondition(ProgrammingLanguageGenerator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    unsigned long long bit = 1ULL << (ifCounter % 64);

    if (isMain) {
        return "(getPath() and "+std::to_string(bit)+") != 0";
    }
    
    std::string condition = "(PATH" + std::to_string(pathNumber) + " and " + std::to_string(bit) + "'u64) != 0";
    return condition;
}

// Generation Methods

void NimStatementCode::gen(ProgrammingLanguageGenerator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void NimLambdaCode::gen(ProgrammingLanguageGenerator& generator) {}

void NimId::gen(ProgrammingLanguageGenerator& generator) {}

void NimInsert::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);
}

void NimRemove::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
}

void NimNew::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void NimContains::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void NimLoop::gen(ProgrammingLanguageGenerator& generator) {
    std::string loopVar = "loop" + std::to_string(generator.loopCounter);
    std::string loopLimitVar = "loopLimit" + std::to_string(generator.loopCounter);
    std::string loopLimitValue = "(50) div (" + std::to_string(generator.loopLevel + 1) + ") + 1";
    generator.addLine("let " + loopLimitVar + " = " + loopLimitValue);
    generator.addLine("for " + loopVar + " in 0 ..< " + loopLimitVar + ":");
    generator.startScope();
    generator.addLine("discard");
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
}

void NimCall::gen(ProgrammingLanguageGenerator& generator) {
    int nParameters = std::ceil(conditionalCounts / 64.0);
    generator.callFunc(id, nParameters);
    if (!generator.functionExists(id)) {
        generator.startFunc(id, nParameters);
        code->gen(generator);
        if (generator.currentScope.top().avaiableVarsID.size() == 0) {
            int id = generator.addVar(generator.varType);
            std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
            generator.addLine(lines);
        }
        int varCount = generator.currentScope.top().avaiableVarsID.size();
        int returnVarPos = rand() % varCount;
        generator.freeVars(true, returnVarPos);
        generator.returnFunc(returnVarPos);
        generator.endFunc();
    }
}

void NimSeq::gen(ProgrammingLanguageGenerator& generator) {}

void NimIf::gen(ProgrammingLanguageGenerator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    generator.addLine("if " + condition + ":");
    generator.startScope();
    generator.addLine("discard");
    c1->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.addLine("else:");
    generator.startScope();
    generator.addLine("discard");
    c2->gen(generator);
    generator.freeVars();
    generator.endScope();
}

// Printing Methods

void NimStatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void NimLambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void NimId::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void NimInsert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void NimRemove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void NimNew::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void NimContains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void NimLoop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void NimCall::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void NimSeq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void NimIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    c1->print(ident + 2);
    c2->print(ident + 2);
}
