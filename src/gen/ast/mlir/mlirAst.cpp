#include "mlirAst.h"
#include "../languageAst.h"
#include "../../generator/mlir/mlirGeneratorVariable.h"
#include "random"

void mlirprintIndentationSpaces(int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " ";
    }
}

std::string mlirgenerateIfCondition(ProgrammingLanguageGenerator& generator) {
}

void MlirArithOp::gen(ProgrammingLanguageGenerator& generator) {
  
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];

    GeneratorScalar* gs = (GeneratorScalar*)var;

    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dist(0, 2);

    static const char* ops[] = { "+", "-", "*" };
    std::string op = ops[dist(gen)];
    
    std::vector<std::string> lines = gs->arithmetic(op);
    generator.addLine(lines);
}


void MlirCondOp::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
   
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;
    MlirGeneratorScalar* mlir_gs = (MlirGeneratorScalar*)gs;

    generator.ifCounter.top()++;

    RegInfo reg = regcontrol->registers[(int)rand() % regcontrol->registers.size()];
    
    std::string condition_id = std::to_string(Registers::REGISTER_COUNTER++);
    std::string type = reg.type;
    std::string cond_reg;
    std::string line;

    if (std::stoi(type.substr(1)) > 64){
        cond_reg = "%rc"+std::to_string(Registers::REGISTER_COUNTER);
        line = cond_reg+" = arith.trunci " + reg.name + " : " + type + " to i64";
        generator.addLine(line);
        generator.addLine("%condition"+condition_id+" = arith.cmpi eq," +cond_reg+", %ptr_val : i64");  
        Registers::REGISTER_COUNTER++;
    }else if(std::stoi(type.substr(1)) < 64){
        cond_reg = "%rc"+std::to_string(Registers::REGISTER_COUNTER);
        line = cond_reg+" = arith.extui " + reg.name + " : " + type + " to i64";
        generator.addLine(line);
        generator.addLine("%condition"+condition_id+" = arith.cmpi eq," +cond_reg+", %ptr_val : i64");  
        Registers::REGISTER_COUNTER++;
    }else{
        generator.addLine("%condition"+condition_id+" = arith.cmpi eq," +reg.name+", %ptr_val : i64");
        Registers::REGISTER_COUNTER++;
    }
    
    std::string condition = "%condition"+condition_id;
    
    line = "scf.if "+condition+" {";
    generator.addLine(line);
    generator.startScope();
    mlir_gs->beginScope();
    c1->gen(generator);
    generator.freeVars();
    generator.endIfScope();
    mlir_gs->finalScope();
    line = "} else {";
    generator.addLine(line);
    generator.startScope();
    mlir_gs->beginScope();
    c2->gen(generator);
    generator.freeVars();
    generator.endScope();
    mlir_gs->finalScope();
}

void MlirLogicOp::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->logical();
    generator.addLine(lines);
}

void MlirFreeOp::gen(ProgrammingLanguageGenerator& generator) {}

void MlirUnaryOp::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;

    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dist(0, 3);
    
    static const char* ops[] = { "+", "-", "!", "abs"};
    std::string op = ops[dist(gen)];

    std::vector<std::string> lines = gs->unary(op);
    generator.addLine(lines);
}

void MlirSelectOp::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->select(false);
    generator.addLine(lines);
}

void MlirLogicSCOp::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->logical_sc(false);
    generator.addLine(lines);
}

void MlirIncDecOp::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;

    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dist(0, 1);

    bool isInc = dist(gen) ? true : false;

    std::vector<std::string> lines = gs->incdec(isInc);
    generator.addLine(lines);
}

void MlirReductionOp::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;
    MlirGeneratorScalar* mlir_gs = (MlirGeneratorScalar*)gs;

    mlir_gs->beginScope();
    std::vector<std::string> lines = gs->reduction();
    generator.addLine(lines);
    mlir_gs->finalScope();
}

void MlirNew::gen(ProgrammingLanguageGenerator& generator) {
    int id = generator.addVar(generator.varType);
    GeneratorVariable* var = generator.variables[id];
    GeneratorScalar* gs = (GeneratorScalar*)var;
    std::vector<std::string> lines = gs->new_(!generator.currentFunction.top()->insertBack);
    generator.addLine(lines);
}

void MlirId::gen(ProgrammingLanguageGenerator& generator) { }

void MlirStatementCode::gen(ProgrammingLanguageGenerator& generator) {
  stmt->gen(generator);
  code->gen(generator);
}

// Generation Methods


// Printing Methods

//void Mlir::print(int ident) {
//    mlirprintIndentationSpaces(ident);
//    std::cout << "Call" << std::endl;
//    code->print(ident + 2);
//}


void MlirStatementCode::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "StatementCode" << std::endl;
}

void MlirArithOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "ArithOp" << std::endl;
}

void MlirCondOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "CondOp" << std::endl;
}

void MlirLogicOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "LogicOp" << std::endl;
}

void MlirFreeOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "FreeOp" << std::endl;
}

void MlirUnaryOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "UnaryOp" << std::endl;
}

void MlirSelectOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "SelectOp" << std::endl;
}

void MlirLogicSCOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "LogicSCOp" << std::endl;
}

void MlirIncDecOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "IncDecOp" << std::endl;
}

void MlirReductionOp::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "ReductionOp" << std::endl;
}

void MlirNew::print(int ident) {
    mlirprintIndentationSpaces(ident);
    std::cout << "New" << std::endl;
}

void MlirId::print(int ident){
    mlirprintIndentationSpaces(ident);
    std::cout << "Id" << std::endl;
}
