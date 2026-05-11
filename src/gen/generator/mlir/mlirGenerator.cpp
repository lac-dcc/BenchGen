#include "mlirGenerator.h"

#include <string>
#include <vector>


void MlirGenerator::generateMainFunction() {
  mainFunction = GeneratorFunction(-1);
  mainFunction.addLine(
      {"module {",
       "  func.func @main() -> f32 {"
        "",
          "    %c0_i64 = arith.constant 0 : i64",
          "    %argv_mock = llvm.mlir.zero : !llvm.ptr",
          "    %ptr_val = llvm.ptrtoint %argv_mock : !llvm.ptr to i64",
          "    %ret = arith.constant 0.0 : f32\n",
       "       func.return %ret : f32\n    }",
       "}",
  });
  mainFunction.insertBack = true;
  currentFunction.push(&mainFunction);
  startScope();
}

void MlirGenerator::addLine(std::string line, int d) {
  std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
  currentFunction.top()->addLine(indentedLine);
}

void MlirGenerator::addLine(std::vector<std::string> lines, int d) {
  for (auto line : lines) {
    addLine(line, d);
  }
}

void MlirGenerator::startScope() {
  GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID,
                                        currentScope.top().avaiableParamsID,
                                        currentScope.top().getIndentation());
  currentScope.push(scope);
}

void MlirGenerator::startFunc(int funcId, int nParameters) {
 
}

bool MlirGenerator::functionExists(int funcId) {
  for (auto& func : functions) {
    if (func.getId() == funcId) {
      return true;
    }
  }
  return false;
}

std::string MlirGenerator::createParams() {

}

void MlirGenerator::callFunc(int funcId, int nParameters) {
  
}

int MlirGenerator::addVar(std::string type) {
  this->variables[varCounter] =
      VariableFactory::createVariable(type, varCounter);
  this->currentScope.top().addVar(varCounter);
  return varCounter++;
}

void MlirGenerator::freeVars(bool hasReturn, int returnVarPos) {
  int numberOfAddedVars = currentScope.top().numberOfAddedVars;
  std::vector<int> availableVarsId = currentScope.top().avaiableVarsID;
  for (int i = 0; i < numberOfAddedVars; i++) {
    int varPos = availableVarsId.size() - i - 1;
    if (!hasReturn || varPos != returnVarPos) {
      GeneratorVariable* var = variables[availableVarsId[varPos]];
      addLine(var->free());
    }
  }
}

void MlirGenerator::returnFunc(int returnVarPos) {
  GeneratorVariable* var =
      variables[currentScope.top().avaiableVarsID[returnVarPos]];
  addLine("return " + var->name + ";");
}

void MlirGenerator::endScope() {
  std::string line = currentScope.top().getIndentationTabs(-1) + "}";
  currentFunction.top()->addLine(line);
  currentScope.pop();
}

void MlirGenerator::endIfScope() {
  std::string line = currentScope.top().getIndentationTabs(-1) + "";
  currentFunction.top()->addLine(line);
  currentScope.pop();
}

void MlirGenerator::endFunc() {
  endScope();
  currentFunction.pop();
  ifCounter.pop();
}


void MlirGenerator::genReadme(std::string dir, std::string target) {

}

void MlirGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceFile = benchmarkName + ".mlir";
    std::string sourceDir = benchDir + "src/";

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    std::ofstream file;
    file.open(sourceDir + sourceFile);

    file << std::endl;

    // Main function
    auto lines = mainFunction.getLines();
    for (auto line : lines) {
        file << line << std::endl;
    }
    file << std::endl;
    file.close();
}

