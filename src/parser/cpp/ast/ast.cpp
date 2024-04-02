#include "ast.h"

void printIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
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
    int varCount = generator.currentScope.back().avaiableVarsID.size();
    if (varCount == 0) {
        return;
    }
    
    std::string line;
    
    int varPos = rand() % varCount;

    Variable* var = generator.variables[generator.currentScope.back().avaiableVarsID[varPos]];
    if(Scalar* sca = dynamic_cast<Scalar*> (var)) {
        sca->value++;
        generator.addLine(sca->name + "++;");
    }

    if(Array* arr = dynamic_cast<Array*> (var)) {
        for(int i = 0; i < arr->size; i++)
            arr->array[i]++;
        
        line = "for (int i = 0; i < " + std::to_string(arr->size) + "; i++) {";
        generator.addLine(line);
        line = arr->name+"[i]++;";
        generator.addLine(line, 1);
        generator.addLine("}");
    }
    
}

void Remove::gen(Generator& generator) {
    int varCount = generator.currentScope.back().avaiableVarsID.size();
    if (varCount == 0) 
        return;
    std::string line;
    
    int varPos = rand() % varCount;
    Variable* var = generator.variables[generator.currentScope.back().avaiableVarsID[varPos]];


    if(Scalar* sca = dynamic_cast<Scalar*> (var)) {
        sca->value--;
        generator.addLine(sca->name + "--;");
    }

    if(Array* arr = dynamic_cast<Array*> (var)) {
        for(int i = 0; i < arr->size; i++)
            arr->array[i]--;
        
        line = "for (int i = 0; i < " + std::to_string(arr->size) + "; i++) {";
        generator.addLine(line);
        line = arr->name+"[i]--;";
        generator.addLine(line, 1);
        generator.addLine("}");
    }

}

void New::gen(Generator& generator) {
    int id = generator.addVar(generator.varType);
    generator.addLine(generator.variables[id]->eval());
}

void Del::gen(Generator& generator) {
    std::string line = "printf(\"DELETE!\\n\");";
    generator.addLine(line);
}

void Contains::gen(Generator& generator) {
    int varCount = generator.currentScope.back().avaiableVarsID.size();
    if (varCount == 0) 
        return;
    int varPos = rand() % varCount;
    Variable* var = generator.variables[generator.currentScope.back().avaiableVarsID[varPos]];
   
    std::string varName = "";
    std::string line;
 
    if(Scalar* sca = dynamic_cast<Scalar*> (var)) {
        varName = sca->name;
    }
    if(Array* arr = dynamic_cast<Array*> (var)) {
        varName = arr->name + "[0]";
    }
    if(Matrix* matrix = dynamic_cast<Matrix*> (var)) {
        varName = matrix->name + "[0][0]";
    }
    
    generator.addLine("if(" + varName + " == 0) {");
    generator.startScope();
    std::string line2 = "printf(\"" + varName + " is 0!\\n\");";
    generator.addLine(line2);
    generator.endScope();
}

void Loop::gen(Generator& generator) {
    generator.startScope();
    int varID = generator.addVar("scalar");
    std::string gVar = generator.variables[varID]->name;
    std::string forLine = "for(int " + gVar + " = 0; " + gVar + " < 10; " + gVar + "++) {";
    generator.addLine(forLine, -1);
    code->gen(generator);
    generator.endScope();
}

void Call::gen(Generator& generator) {
    generator.startFunc();
    code->gen(generator);
    generator.endFunc();
}

void Seq::gen(Generator& generator) {
    // TODO: What to do with sequences?
}

void If::gen(Generator& generator) {
    ifParam->gen(generator);
}

void IfParam::gen(Generator& generator) {
    std::string line = "if(1 < 2) {";
    generator.addLine(line);
    generator.startScope();
    code->gen(generator);
    generator.endScope();
    else_->gen(generator);
}

void NoParamIf::gen(Generator& generator) {
    std::string line = "if(1 < 2) {}";
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