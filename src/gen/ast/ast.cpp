#include "ast.h"
#include <typeinfo>

std::stack<int> path_stack;

//void stack_path_clear()
//{
//    while (!path_stack.empty()) {
//        path_stack.pop();
//    }
//}

void path_stack_init()
{
   // stack_path_clear();
    path_stack.push(1);
}

int get_mask() {
    return 1 << (path_stack.top() - 1);
}

void printIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string generateIfCondition(Generator& generator) {
    bool isMain = generator.currentFunction.top()->insertBack;
    if (isMain) {
        return "get_path() & 1";
    }
    
    int ifCounter = generator.ifCounter.top();
    int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
    std::string bit = std::format("{:#x}", get_mask());
    std::string condition = "PATH" + std::to_string(pathNumber) + " & " + bit;
    return condition;
}

// Generation Methods

void StatementCode::gen(Generator& generator) {
    stmt->gen(generator);
    code->gen(generator);
}

void LambdaCode::gen(Generator& generator) {
    // No operation for lambda code generation
}

void Id::gen(Generator& generator) {
    // TODO: What to do with ids?
}

void Insert::gen(Generator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->insert();
    generator.addLine(lines);
}

void Remove::gen(Generator& generator) {
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->remove();
    generator.addLine(lines);
}

void New::gen(Generator& generator) {
    int id = generator.addVar(generator.varType);
    std::vector<std::string> lines = generator.variables[id]->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void Contains::gen(Generator& generator) {
    int varCount = generator.currentScope.top().getVarCounter();
    if (varCount == 0) return;

    int varPos = rand() % varCount;
    GeneratorVariable* var = generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
    std::vector<std::string> lines = var->contains(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void Loop::gen(Generator& generator) {
    std::string loopVar = "loop" + std::to_string(generator.loopCounter);
    std::string loopVarLine = "unsigned int " + loopVar + " = 0;";
    generator.addLine(loopVarLine);

    std::string loopLimitVar = "loopLimit" + std::to_string(generator.loopCounter);
    std::string loopLimitValue = "(rand()%loopsFactor)/" + std::to_string(generator.loopLevel + 1) + " + 1";
    std::string loopLimitLine = "unsigned int " + loopLimitVar + " = " + loopLimitValue + ";";
    generator.addLine(loopLimitLine);

    std::string forLine = "for(; " + loopVar + " < " + loopLimitVar + "; " + loopVar + "++) {";
    generator.addLine(forLine);

    generator.startScope();
    generator.loopLevel++;
    generator.loopCounter++;
    code->gen(generator);
    generator.freeVars();
    generator.endScope();
    generator.loopLevel--;
}

void Call::gen(Generator& generator) {
    int nParameters = std::ceil(conditionalCounts / 64.0);
    generator.callFunc(id, nParameters);

    

    if (!generator.functionExists(id)) {

        std::stack<int> aux = path_stack;
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
        path_stack = aux;
    }
}

void Seq::gen(Generator& generator) {
    // TODO: What to do with sequences?
}


void If::gen(Generator& generator) {
    std::string condition = generateIfCondition(generator);
    generator.ifCounter.top()++;
    std::string line = "if(" + condition + ") {";
    generator.addLine(line);

    path_stack.push(path_stack.top() + 1);
    
    generator.startScope();
    c1->gen(generator);
    generator.freeVars();
    generator.endScope();

    int then_counter = path_stack.top();
    path_stack.pop();
    
    line = "else {";
    generator.addLine(line);
    
    int else_counter = path_stack.top();
    
    generator.startScope();

    c2->gen(generator);
    generator.freeVars();
    generator.endScope();

    path_stack.push(std::max(then_counter, else_counter));
}

// Printing Methods

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
    c1->print(ident + 2);
    c2->print(ident + 2);
}