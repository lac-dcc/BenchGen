#include "cangjieAst.h"
#include "../languageAst.h"


void cangjieprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string cangjiegenerateIfCondition(ProgrammingLanguageGenerator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    if (isMain) {
        return "(get_path() & 1) != 1";
    }
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    int bit = std::pow(2, ifCounter % 64);
    std::string condition = "(PATH" + std::to_string(pathNumber) + " & " + std::to_string(bit)+") != 1";
    return condition;
}

// Generation Methods

void CangjieStatementCode::gen(ProgrammingLanguageGenerator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void CangjieLambdaCode::gen(ProgrammingLanguageGenerator& generator) {
    // No operation for lambda code generation
}

void CangjieId::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with ids?
}

void CangjieInsert::gen(ProgrammingLanguageGenerator& generator) {

    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);

}

void CangjieRemove::gen(ProgrammingLanguageGenerator& generator) {
  
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
    
}

void CangjieNew::gen(ProgrammingLanguageGenerator& generator) {

    int id = generator.addVar(generator.varType);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void CangjieContains::gen(ProgrammingLanguageGenerator& generator) {

    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void CangjieLoop::gen(ProgrammingLanguageGenerator& generator) {

    std::string loopVar = "loop" + std::to_string(generator.loopCounter);
    std::string loopVarLine = "var " + loopVar + ": UInt64 = 0;";
    generator.addLine(loopVarLine);

    std::string loopLimitVar = "loopLimit" + std::to_string(generator.loopCounter);
    std::string loopLimitValue = "UInt64((50)/" + std::to_string(generator.loopLevel + 1) + " + 1)";
    std::string loopLimitLine = "var " + loopLimitVar + ": UInt64 = " + loopLimitValue + ";";
    generator.addLine(loopLimitLine);

    std::string forLine = "for(_ in " + loopVar+".."+loopLimitVar+") {";
    generator.addLine(forLine);

    generator.startScope();
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
}

void CangjieCall::gen(ProgrammingLanguageGenerator& generator) {
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

void CangjieSeq::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with sequences?
}

void CangjieIf::gen(ProgrammingLanguageGenerator& generator) {

    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if(" + condition + ") {";
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

void CangjieStatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void CangjieLambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void CangjieId::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void CangjieInsert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void CangjieRemove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void CangjieNew::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void CangjieContains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void CangjieLoop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void CangjieCall::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void CangjieSeq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void CangjieIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    c1->print(ident + 2);
    c2->print(ident + 2);
}
