#include "pipefishAst.h"
#include "../languageAst.h"


void pipefishprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string pipefishgenerateIfCondition(ProgrammingLanguageGenerator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    if (isMain) {
        return "path & 1";
    }
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    int bit = std::pow(2, ifCounter % 64);
    std::string condition = "path_" + std::to_string(pathNumber) + " == " + std::to_string(bit);
    return condition;
}

// Generation Methods

void PipefishStatementCode::gen(ProgrammingLanguageGenerator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void PipefishLambdaCode::gen(ProgrammingLanguageGenerator& generator) {
    // No operation for lambda code generation
}

void PipefishId::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with ids?
}

void PipefishInsert::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];

    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->insert();
    generator.addLine(lines);

}

void PipefishRemove::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];

    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->remove();
    generator.addLine(lines);
    
}

void PipefishNew::gen(ProgrammingLanguageGenerator& generator) {

    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];

    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->new_(false);
    generator.addLine(lines);
}

void PipefishContains::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];

    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->contains(false);
    generator.addLine(lines);
}

void PipefishLoop::gen(ProgrammingLanguageGenerator& generator) {

}

void PipefishCall::gen(ProgrammingLanguageGenerator& generator) {
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

void PipefishSeq::gen(ProgrammingLanguageGenerator& generator) {
    // TODO: What to do with sequences?
}

void PipefishIf::gen(ProgrammingLanguageGenerator& generator) {

    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = condition + ":";
    generator.addLine(line);
    generator.startScope();
    c1->gen(generator);
    generator.freeVars();
    generator.endScope();
    line = "else:";
    generator.addLine(line);
    generator.startScope();
    c2->gen(generator);
    generator.freeVars();
    generator.endScope();
}

// Printing Methods

void PipefishStatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void PipefishLambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void PipefishId::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void PipefishInsert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void PipefishRemove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void PipefishNew::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void PipefishContains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void PipefishLoop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void PipefishCall::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void PipefishSeq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void PipefishIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    c1->print(ident + 2);
    c2->print(ident + 2);
}
