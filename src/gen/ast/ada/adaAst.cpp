#include "adaAst.h"

#include "../../generator/ada/adaGenerator.h"
#include "../languageAst.h"

void adaprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string adagenerateIfCondition(ProgrammingLanguageGenerator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    if (isMain) {
        return "(Get_Path and 1) /= 0";
    }
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    unsigned long long bit = 1ULL << (ifCounter % 64);
    std::string condition = "(PATH" + std::to_string(pathNumber) + " and " + std::to_string(bit) + ") /= 0";
    return condition;
}

// Generation Methods

void AdaStatementCode::gen(ProgrammingLanguageGenerator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void AdaLambdaCode::gen(ProgrammingLanguageGenerator& generator) {}

void AdaId::gen(ProgrammingLanguageGenerator& generator) {}

void AdaInsert::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);
}

void AdaRemove::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
}

void AdaNew::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    AdaGenerator& adaGen = static_cast<AdaGenerator&>(generator);
    adaGen.addArrayDeclaration(generator.variables[id]->name);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void AdaContains::gen(ProgrammingLanguageGenerator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;
    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void AdaLoop::gen(ProgrammingLanguageGenerator& generator) {
    std::string loopVar = "L_" + std::to_string(generator.loopCounter);
    std::string loopLimit = "(50 / " + std::to_string(generator.loopLevel + 1) + ") + 1";
    generator.addLine("for " + loopVar + " in 1 .. " + loopLimit + " loop");
    generator.startScope();
    generator.addLine("null;");
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
    generator.addLine("end loop;");
}

void AdaCall::gen(ProgrammingLanguageGenerator& generator) {
    int nParameters = std::ceil(conditionalCounts / 64.0);
    generator.callFunc(id, nParameters);
    if (!generator.functionExists(id)) {
        generator.startFunc(id, nParameters);
        code->gen(generator);
        if (generator.currentScope.top().avaiableVarsID.size() == 0) {
            int id = generator.addVar(generator.varType);
            AdaGenerator& adaGen = static_cast<AdaGenerator&>(generator);
            adaGen.addArrayDeclaration(generator.variables[id]->name);
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

void AdaSeq::gen(ProgrammingLanguageGenerator& generator) {}

void AdaIf::gen(ProgrammingLanguageGenerator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    generator.addLine("if " + condition + " then");
    generator.startScope();
    generator.addLine("null;");
    c1->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.addLine("else");
    generator.startScope();
    generator.addLine("null;");
    c2->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.addLine("end if;");
}

// Printing Methods

void AdaStatementCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
    stmt->print(ident + 2);
    code->print(ident + 2);
}

void AdaLambdaCode::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "LambdaCode" << std::endl;
}

void AdaId::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Id: " << id << std::endl;
}

void AdaInsert::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Insert" << std::endl;
}

void AdaRemove::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Remove" << std::endl;
}

void AdaNew::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void AdaContains::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Contains" << std::endl;
}

void AdaLoop::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Loop" << std::endl;
    code->print(ident + 2);
}

void AdaCall::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Call" << std::endl;
    code->print(ident + 2);
}

void AdaSeq::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "Seq" << std::endl;
}

void AdaIf::print(int ident) {
    printIndentationSpaces(ident);
    std::cout << "If" << std::endl;
    c1->print(ident + 2);
    c2->print(ident + 2);
}
