#include "valeAst.h"

#include "../languageAst.h"

void valeprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

// Vale drives branch selection off the threaded rng rather than path-bit words.
// In main the rng is an owned local (borrow with &); inside a function it is the
// &Rng parameter, forwarded as-is.
std::string valegenerateIfCondition(ProgrammingLanguageGenerator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    std::string rngArg = isMain ? "&rng" : "rng";
    return "nextBool(" + rngArg + ")";
}

// Generation Methods

void ValeStatementCode::gen(ProgrammingLanguageGenerator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void ValeLambdaCode::gen(ProgrammingLanguageGenerator& generator) {}

void ValeId::gen(ProgrammingLanguageGenerator& generator) {}

void ValeInsert::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);
}

void ValeRemove::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
}

void ValeNew::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void ValeContains::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

// A counted `while` loop. The counter (L<n>) is declared in the enclosing scope so
// nested loops get distinct names; the loop-variable-op loops below use foreach,
// which scopes its own index.
void ValeLoop::gen(ProgrammingLanguageGenerator& generator) {
    std::string loopVar = "L" + std::to_string(generator.loopCounter);
    int loopLimit = (50 / (generator.loopLevel + 1)) + 1;
    generator.addLine(loopVar + " = 0;");
    generator.addLine("while " + loopVar + " < " + std::to_string(loopLimit) + " {");
    generator.startScope();
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.addLine("set " + loopVar + " = " + loopVar + " + 1;");
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
    generator.addLine("}");
}

void ValeCall::gen(ProgrammingLanguageGenerator& generator) {
    int nParameters = std::ceil(conditionalCounts / 64.0);
    generator.callFunc(id, nParameters);
    if (!generator.functionExists(id)) {
        generator.startFunc(id, nParameters);
        code->gen(generator);
        // A function must return a BenchArray; if the body produced none, allocate one.
        if (generator.currentScope.top().avaiableVarsID.size() == 0) {
            int newId = generator.addVar(generator.varType);
            std::vector<std::string> lines = generator.variables[newId]->new_(!generator.currentFunction.top()->insertBack);
            generator.addLine(lines);
        }
        int varCount = generator.currentScope.top().avaiableVarsID.size();
        int returnVarPos = rand() % varCount;
        generator.freeVars(true, returnVarPos);
        generator.returnFunc(returnVarPos);
        generator.endFunc();
    }
}

void ValeSeq::gen(ProgrammingLanguageGenerator& generator) {}

void ValeIf::gen(ProgrammingLanguageGenerator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    generator.addLine("if " + condition + " {");
    generator.startScope();
    c1->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.addLine("} else {");
    generator.startScope();
    c2->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.addLine("}");
}

// Printing Methods

void ValeStatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void ValeLambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void ValeId::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void ValeInsert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void ValeRemove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void ValeNew::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void ValeContains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void ValeLoop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void ValeCall::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void ValeSeq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void ValeIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    c1->print(ident + 2);
    c2->print(ident + 2);
}
