#include "zigAst.h"

void zigprintIndentationSpaces(int indent) {
  for (int i = 0; i < indent; i++) {
    std::cout << " ";
  }
}

std::string ziggenerateIfCondition(ProgrammingLanguageGenerator& generator) {
  bool isMain = generator.currentFunction.top()->insertBack;
  int ifCounter = generator.ifCounter.top();
  int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
  long long bit = 1LL << (ifCounter % 64);

  if (isMain) {
    return "(try get_path() & "+std::to_string(bit)+") != 0";
  }
  
  std::string condition = "(path" + std::to_string(pathNumber) + " & " +
                          std::to_string(bit) + ") != 0";
  return condition;
}

void ZigStatementCode::gen(ProgrammingLanguageGenerator& generator) {
  stmt->gen(generator);
  code->gen(generator);
}

void ZigLambdaCode::gen(ProgrammingLanguageGenerator& generator) {}

void ZigId::gen(ProgrammingLanguageGenerator& generator) {}

void ZigInsert::gen(ProgrammingLanguageGenerator& generator) {
  int varCount = generator.currentScope.top().avaiableVarsID.size();
  if (varCount == 0)
    return;

  int varPos = rand() % varCount;
  GeneratorVariable* var =
      generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
  std::vector<std::string> lines = var->insert();
  generator.addLine(lines);
}

void ZigRemove::gen(ProgrammingLanguageGenerator& generator) {
  int varCount = generator.currentScope.top().avaiableVarsID.size();
  if (varCount == 0)
    return;

  int varPos = rand() % varCount;
  GeneratorVariable* var =
      generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
  std::vector<std::string> lines = var->remove();
  generator.addLine(lines);
}

void ZigNew::gen(ProgrammingLanguageGenerator& generator) {
  int id = generator.addVar(generator.varType);
  std::vector<std::string> lines = generator.variables[id]->new_(
      !generator.currentFunction.top()->insertBack);
  generator.addLine(lines);
}

void ZigContains::gen(ProgrammingLanguageGenerator& generator) {
  int varCount = generator.currentScope.top().getVarCounter();
  if (varCount == 0)
    return;

  int varPos = rand() % varCount;
  GeneratorVariable* var =
      generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
  std::vector<std::string> lines =
      var->contains(!generator.currentFunction.top()->insertBack);
  generator.addLine(lines);
}

void ZigLoop::gen(ProgrammingLanguageGenerator& generator) {
  std::string loopVar = "loop" + std::to_string(generator.loopCounter);
  std::string loopVarLine = "var " + loopVar + ": usize = 0;";
  generator.addLine(loopVarLine);

  std::string loopLimitVar =
      "loopLimit" + std::to_string(generator.loopCounter);
  std::string loopLimitValue =
      "(50)/" + std::to_string(generator.loopLevel + 1) + " + 1";
  std::string loopLimitLine =
      "const " + loopLimitVar + ": usize = " + loopLimitValue + ";";
  generator.addLine(loopLimitLine);

  std::string forLine = "while (" + loopVar + " < " + loopLimitVar + ") {";
  generator.addLine(forLine);

  generator.startScope();
  generator.loopLevel++;
  generator.loopCounter++;
  code->gen(generator);
  generator.freeVars();
  generator.addLine(loopVar + " += 1;");
  generator.endScope();
  generator.loopLevel--;
}

void ZigCall::gen(ProgrammingLanguageGenerator& generator) {
  int nParameters = std::ceil(conditionalCounts / 64.0);
  generator.callFunc(id, nParameters);
  if (!generator.functionExists(id)) {
    generator.startFunc(id, nParameters);
    code->gen(generator);
    if (generator.currentScope.top().avaiableVarsID.size() == 0) {
      int id = generator.addVar(generator.varType);
      std::vector<std::string> lines = generator.variables[id]->new_(
          !generator.currentFunction.top()->insertBack);
      generator.addLine(lines);
    }
    int varCount = generator.currentScope.top().avaiableVarsID.size();
    int returnVarPos = rand() % varCount;
    generator.freeVars(true, returnVarPos);
    generator.returnFunc(returnVarPos);
    generator.endFunc();
  }
}

void ZigSeq::gen(ProgrammingLanguageGenerator& generator) {}

void ZigIf::gen(ProgrammingLanguageGenerator& generator) {
  std::string condition = ziggenerateIfCondition(generator);
  generator.ifCounter.top()++;
  std::string line = "if (" + condition + ") {";
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

void ZigStatementCode::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "StatementCode" << std::endl;
  stmt->print(ident + 2);
  code->print(ident + 2);
}

void ZigLambdaCode::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "LambdaCode" << std::endl;
}

void ZigId::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "Id: " << id << std::endl;
}

void ZigInsert::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "Insert" << std::endl;
}

void ZigRemove::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "Remove" << std::endl;
}

void ZigNew::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "New" << std::endl;
}

void ZigContains::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "Contains" << std::endl;
}

void ZigLoop::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "Loop" << std::endl;
  code->print(ident + 2);
}

void ZigCall::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "Call" << std::endl;
  code->print(ident + 2);
}

void ZigSeq::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "Seq" << std::endl;
}

void ZigIf::print(int ident) {
  zigprintIndentationSpaces(ident);
  std::cout << "If" << std::endl;
  c1->print(ident + 2);
  c2->print(ident + 2);
}
