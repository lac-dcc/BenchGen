#include "rustAst.h"
#include "../languageAst.h"


void rustprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string rustgenerateIfCondition(ProgrammingLanguageGenerator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    if (isMain) {
        return "get_path() & 1";
    }
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    int bit = std::pow(2, ifCounter % 64);
    std::string condition = "PATH" + std::to_string(pathNumber) + " & " + std::to_string(bit);
    return condition;
}

// Generation Methods

void RustStatementCode::gen(ProgrammingLanguageGenerator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void RustLambdaCode::gen(ProgrammingLanguageGenerator& generator) {
    // No operation for lambda code generation
}

void RustId::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with ids?
}

void RustInsert::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);

}

void RustRemove::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
    
}

void RustNew::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void RustContains::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void RustLoop::gen(ProgrammingLanguageGenerator& generator) {
    std::string loopVar = "loop" + std::to_string(generator.loopCounter);

    std::string loopLimitVar = "loopLimit" + std::to_string(generator.loopCounter);
    std::string loopLimitValue = "(100%loopsFactor)/" + std::to_string(generator.loopLevel + 1) + " + 1";
    std::string loopLimitLine = "let mut " + loopLimitVar + " = " + loopLimitValue + ";";
    generator.addLine(loopLimitLine);
    generator.addLine("let mut i"+loopVar+" = "+ loopVar);
    std::string forLine = "for "+loopVar+" in i..."+loopLimitVar + " {";
    generator.addLine(forLine);

    generator.startScope();
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
}

void RustCall::gen(ProgrammingLanguageGenerator& generator) {
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

void RustSeq::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with sequences?
}

void RustIf::gen(ProgrammingLanguageGenerator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if " + condition + " {";
    generator.addLine(line);
    generator.startScope();
    c1->gen(generator);
    generator.freeVars();
    generator.endScope();
    line = "else {";
    generator.addLine(line);
    generator.startScope();
    c2->gen(generator);
    generator.freeVars();
    generator.endScope();
}

// Printing Methods

void RustStatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void RustLambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void RustId::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void RustInsert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void RustRemove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void RustNew::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void RustContains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void RustLoop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void RustCall::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void RustSeq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void RustIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    c1->print(ident + 2);
    c2->print(ident + 2);
}