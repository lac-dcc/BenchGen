#include "vAst.h"
#include "../languageAst.h"

void vprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string vgenerateIfCondition(ProgrammingLanguageGenerator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    long long bit = 1LL << (ifCounter % 64);

    if (isMain) {
        return "(get_path() & "+std::to_string(bit)+") != 0";
    }
    
    std::string condition = "(path" + std::to_string(pathNumber) + " & " + std::to_string(bit) + ") != 0";
    return condition;
}

// Generation Methods

void VStatementCode::gen(ProgrammingLanguageGenerator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void VLambdaCode::gen(ProgrammingLanguageGenerator& generator) {
    // No operation
}

void VId::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with ids?
}

void VInsert::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);
}

void VRemove::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
}

void VNew::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void VContains::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void VLoop::gen(ProgrammingLanguageGenerator& generator) {
    std::string loopVar = "loop" + std::to_string(generator.loopCounter);
    generator.addLine("mut " + loopVar + " := 0");

    std::string loopLimitVar = "loop_limit" + std::to_string(generator.loopCounter);
    std::string loopLimitValue = "(50)/" + std::to_string(generator.loopLevel + 1) + " + 1";
    generator.addLine(loopLimitVar + " := " + loopLimitValue);

    std::string forLine = "for " + loopVar + " < " + loopLimitVar + " {";
    generator.addLine(forLine);

    generator.startScope();
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.addLine(loopVar + "++");
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
}

void VCall::gen(ProgrammingLanguageGenerator& generator) {
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

void VSeq::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with sequences?
}

void VIf::gen(ProgrammingLanguageGenerator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if " + condition + " {";
    generator.addLine(line);
    generator.startScope();
    c1->gen(generator);
    generator.freeVars();
    generator.endIfScope();
    line = "} else {";
    generator.addLine(line);
    generator.startScope();
    c2->gen(generator);
    generator.freeVars();
    generator.endScope();
}

// Printing Methods

void VStatementCode::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void VLambdaCode::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void VId::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void VInsert::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void VRemove::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void VNew::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void VContains::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void VLoop::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void VCall::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void VSeq::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void VIf::print(int ident) {
    vprintIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    c1->print(ident + 2);
    c2->print(ident + 2);
}
