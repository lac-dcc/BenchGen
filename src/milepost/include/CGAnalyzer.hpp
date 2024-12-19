#ifndef CG_ANALYZER
#define CG_ANALYZER

#include <set>
#include <vector>

#include "llvm/Analysis/CallGraph.h"
#include "llvm/Analysis/CallGraphSCCPass.h"
#include "llvm/IR/PassManager.h"
#include "llvm/Pass.h"
#include "llvm/Support/GraphWriter.h"
#include "llvm/Support/raw_ostream.h"

namespace cganalyzer_nm {

class CGAnalyzerPass : public llvm::PassInfoMixin<CGAnalyzerPass> {
 public:
  explicit CGAnalyzerPass(llvm::raw_ostream &OS) : OS(OS) {}

  void visitor(llvm::Module &M, llvm::ModuleAnalysisManager &MAM);

  llvm::PreservedAnalyses run(llvm::Module &M,
                              llvm::ModuleAnalysisManager &MAM);

  void print();
  // Without isRequired returning true, this pass will be skipped for functions
  // decorated with the optnone LLVM attribute. Note that clang -O0 decorates
  // all functions with optnone.
  static bool isRequired() { return true; }

 private:
  std::vector<std::string> measures;
  llvm::raw_ostream &OS;
};
}  // namespace cganalyzer_nm
#endif