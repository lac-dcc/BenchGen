#include "odinAst.h"

void odinprintIndentationSpaces(int indent) {
  for (int i = 0; i < indent; i++) {
    std::cout << " ";
  }
}

std::string odingenerateIfCondition(ProgrammingLanguageGenerator& generator) {
  bool isMain = generator.currentFunction.top()->insertBack;
  int ifCounter = generator.ifCounter.top();
  int pathNumber = std::ceil((ifCounter + 1) / 64.0) - 1;
  long long bit = 1LL << (ifCounter % 64);
  if (isMain) {
    return "(get_path() & "+std::to_string(bit)+") != 0";
  }
  
  std::string condition = "(path" + std::to_string(pathNumber) + " & " +
                          std::to_string(bit) + ") != 0";
  return condition;
}

void OdinStatementCode::gen(ProgrammingLanguageGenerator& generator) {
  stmt->gen(generator);
  code->gen(generator);
}

void OdinLambdaCode::gen(ProgrammingLanguageGenerator& generator) {}

void OdinId::gen(ProgrammingLanguageGenerator& generator) {}

void OdinInsert::gen(ProgrammingLanguageGenerator& generator) {
  int varCount = generator.currentScope.top().avaiableVarsID.size();
  if (varCount == 0)
    return;

  int varPos = rand() % varCount;
  GeneratorVariable* var =
      generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
  std::vector<std::string> lines = var->insert();
  generator.addLine(lines);
}

void OdinRemove::gen(ProgrammingLanguageGenerator& generator) {
  int varCount = generator.currentScope.top().avaiableVarsID.size();
  if (varCount == 0)
    return;

  int varPos = rand() % varCount;
  GeneratorVariable* var =
      generator.variables[generator.currentScope.top().avaiableVarsID[varPos]];
  std::vector<std::string> lines = var->remove();
  generator.addLine(lines);
}

void OdinNew::gen(ProgrammingLanguageGenerator& generator) {
  int id = generator.addVar(generator.varType);
  std::vector<std::string> lines = generator.variables[id]->new_(
      !generator.currentFunction.top()->insertBack);
  generator.addLine(lines);
}

void OdinContains::gen(ProgrammingLanguageGenerator& generator) {
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

void OdinLoop::gen(ProgrammingLanguageGenerator& generator) {
  std::string loopVar = "loop" + std::to_string(generator.loopCounter);
  std::string loopVarLine = loopVar + ": int = 0";
  generator.addLine(loopVarLine);

  std::string loopLimitVar =
      "loopLimit" + std::to_string(generator.loopCounter);
  std::string loopLimitValue =
      "(50)/" + std::to_string(generator.loopLevel + 1) + " + 1";
  std::string loopLimitLine =
      loopLimitVar + " :: " + loopLimitValue + ";";
  generator.addLine(loopLimitLine);

  std::string forLine = "for " + loopVar + " < " + loopLimitVar + " {";
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

void OdinCall::gen(ProgrammingLanguageGenerator& generator) {
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

void OdinSeq::gen(ProgrammingLanguageGenerator& generator) {}

void OdinIf::gen(ProgrammingLanguageGenerator& generator) {
  std::string condition = odingenerateIfCondition(generator);
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

void OdinStatementCode::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "StatementCode" << std::endl;
  stmt->print(ident + 2);
  code->print(ident + 2);
}

void OdinLambdaCode::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "LambdaCode" << std::endl;
}

void OdinId::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "Id: " << id << std::endl;
}

void OdinInsert::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "Insert" << std::endl;
}

void OdinRemove::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "Remove" << std::endl;
}

void OdinNew::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "New" << std::endl;
}

void OdinContains::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "Contains" << std::endl;
}

void OdinLoop::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "Loop" << std::endl;
  code->print(ident + 2);
}

void OdinCall::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "Call" << std::endl;
  code->print(ident + 2);
}

void OdinSeq::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "Seq" << std::endl;
}

void OdinIf::print(int ident) {
  odinprintIndentationSpaces(ident);
  std::cout << "If" << std::endl;
  c1->print(ident + 2);
  c2->print(ident + 2);
}
