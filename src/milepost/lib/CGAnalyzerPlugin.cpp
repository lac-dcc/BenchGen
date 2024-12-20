#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include "CGAnalyzer.hpp"

using namespace llvm;

bool registerPipeline(StringRef Name, ModulePassManager &MAM,
                      ArrayRef<PassBuilder::PipelineElement>) {
    if (Name == "fExtractor") {
        MAM.addPass(cganalyzer_nm::CGAnalyzerPass(errs()));
        return true;
    }
    return false;
}

PassPluginLibraryInfo getAddConstPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "CGAnalyzer", LLVM_VERSION_STRING,
          [](llvm::PassBuilder &PB) {
            PB.registerPipelineParsingCallback(registerPipeline);
          }};
}
extern "C" LLVM_ATTRIBUTE_WEAK PassPluginLibraryInfo llvmGetPassPluginInfo() {
    return getAddConstPluginInfo();
}