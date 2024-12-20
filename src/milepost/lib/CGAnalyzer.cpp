#include "CGAnalyzer.hpp"
#include "llvm/IR/Constants.h"
#include "llvm/Support/Casting.h"
#include <llvm/IR/CFG.h>
#include <llvm/Analysis/CFG.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/Instruction.h>
#include <llvm/IR/Operator.h>


using namespace llvm;

namespace cganalyzer_nm {

void CGAnalyzerPass::visitor(llvm::Module &M,
                                      llvm::ModuleAnalysisManager &MAM) {                                      
  for (Function &function : M) {
    StringRef fname = function.getName();
    if (function.isDeclaration() == 0) {
      // Basic Block Predecessors/Successors;
      unsigned totalBasicBlocks = 0, onePredecessor = 0, twoPredecessor = 0,
               greaterTwoPredecessor = 0, oneSuccessor = 0, twoSuccessor = 0,
               greaterTwoSuccessor = 0, onePredSuc = 0, onePred_twoSuc = 0,
               twoPred_oneSuc = 0, twoPredSuc = 0, greaterTwoPredSuc = 0;

      // Function Instructions;
      unsigned assigmentInstructions = 0, numOfIntOperations = 0,
               numOfFloatOperations = 0, numInstructions = 0,
               numOfSwitchInstruction = 0, numOfUnaryOperations = 0,
               ptrArithmetic = 0, oneOperandConst = 0, leftOpIntConst = 0;

      // Basic Block Instructions;
      float instructionAverage = 0.0;
      unsigned instructionLess15 = 0, instructionInterval = 0,
               instructionGreater500 = 0;

      // Calls;
      unsigned ptrRetCallType = 0, call4args = 0, intRetCallType = 0,
               directCalls = 0, callArgPtrType = 0, indirectCalls = 0;

      // Branchs;
      unsigned condBranch = 0, uncondBranch = 0;

      // Phi-nodes;
      float averagePhi = 0.0, averagePhiArgs = 0.0;
      unsigned blockWithoutPhi = 0, blockPhiIntervalNodes = 0,
               blockPhiGreater3Nodes = 0, blocksPhiGreater5Arg = 0,
               blocksPhiIntervalArg = 0;

      //  Variables;
      unsigned constInt0 = 0, constInt32bits = 0, constInt1 = 0,
               constInt64bits = 0, refLocalVariable, localPtrVar = 0,
               numRefeOfLocalVar = 0, defUseCounter = 0, refExterVariable = 0,
               staticPtrVar = 0, addresVar = 0;

      // Control Flow Graph;
      unsigned numOfCriticalEdges = 0, abnormalEdge = 0, numOfEdges = 0;

      // References and Functions;
      unsigned indirectRefs = 0, addressFunction = 0;

      // Auxiliary variables (not counters)
      unsigned blockWithPhi = 0, totalPhiArgs = 0, totalPhi = 0;
      std::set<Value *> varRefTemp;
      std::set<GlobalVariable *> ExterRefVarTemp;

      for (BasicBlock &block : function) {
        const Instruction *terminalInstruction = block.getTerminator();
        unsigned numOfSuccessors = terminalInstruction->getNumSuccessors();

        if (numOfSuccessors == 1)
          ++oneSuccessor;
        else if (numOfSuccessors == 2)
          ++twoSuccessor;
        else if (numOfSuccessors > 2)
          ++greaterTwoSuccessor;

        unsigned localPredecessorBlocks = 0;
        for (BasicBlock *predecessor : predecessors(&block)) {
          ++localPredecessorBlocks;
        }

        if (localPredecessorBlocks == 1)
          ++onePredecessor;
        else if (localPredecessorBlocks == 2)
          ++twoPredecessor;
        else if (localPredecessorBlocks > 2)
          ++greaterTwoPredecessor;

        for (BasicBlock *successor : successors(&block)) {
          ++numOfEdges;
        }

        if ((localPredecessorBlocks == 1) && (numOfSuccessors == 1))
          ++onePredSuc;
        else if ((localPredecessorBlocks == 1) && (numOfSuccessors == 2))
          ++onePred_twoSuc;
        else if ((localPredecessorBlocks == 2) && (numOfSuccessors == 1))
          ++twoPred_oneSuc;
        else if ((localPredecessorBlocks == 2) && (numOfSuccessors == 2))
          ++twoPredSuc;
        else if ((localPredecessorBlocks > 2) && (numOfSuccessors > 2))
          ++greaterTwoPredSuc;

        if (numOfSuccessors != 0) {
          for (int m = 0; m < numOfSuccessors; m++) {
            if (isCriticalEdge(terminalInstruction, m)) {
              ++numOfCriticalEdges;
            }
          }
        }
        ++totalBasicBlocks;
        unsigned phiCounterBlock = 0, localPhiArgs = 0;

        /*~~~~*/
        for (Instruction &instruction : block) {

          unsigned numOperands = instruction.getNumOperands();
          unsigned tempIndirecCount = 0;
          Type *instructionTy = instruction.getType();

          if (auto *SI = dyn_cast<StoreInst>(&instruction)) {
            /* There are two arguments to the store instruction:
               a value to store and an address at which to store it
            */
            Value *isInstValue = instruction.getOperand(0);
            Type *getTypeBits = isInstValue->getType();

            if (getTypeBits->isPointerTy())
              ++indirectRefs;
            if (isa<Function>(isInstValue))
              ++addressFunction;
            if ((getTypeBits->isPointerTy()) && (isa<Instruction>(isInstValue)))
              ++addresVar;

          } else if (auto *BI = dyn_cast<BranchInst>(&instruction)) {
            if (BI->isConditional())
              ++condBranch;
            else if (BI->isUnconditional())
              ++uncondBranch;
          } else if (auto *SI = dyn_cast<SwitchInst>(&instruction)) {
            ++numOfSwitchInstruction;
          } else if (auto *CI = dyn_cast<CallInst>(&instruction)) {
            Function *callFunction = CI->getCalledFunction();
            Type *callType = CI->getType();

            if (callType->isIntegerTy())
              ++intRetCallType;
            else if (callType->isPointerTy())
              ++ptrRetCallType;
            /*  if calledFunction is nullptr and stripped value is a
                function, then, it's a direct call in the generate assembly.
                (Ref:
                https://lists.llvm.org/pipermail/llvm-dev/2018-August/125098.html)
            */
            if (callFunction == nullptr) {
              Value *calledValue = CI->getCalledOperand()->stripPointerCasts();
              if (isa<Function>(calledValue)) {
                ++directCalls;               
              }
              else {
                ++indirectCalls;
              }
            } else
              ++directCalls;

            unsigned argsCount = 0;
            if (callFunction != nullptr) {
              unsigned numArgOp = CI->arg_size();

              for (int arg = 0; arg < numArgOp; arg++) {
                Type *argTy = CI->getArgOperand(arg)->getType();
                if (argTy->isPointerTy())
                  ++tempIndirecCount;
                ++argsCount;
              }
            }
            if (tempIndirecCount != 0)
              ++callArgPtrType;
            if (argsCount > 4)
              ++call4args;
          }
          /*  The ‘invoke’ instruction causes control to transfer to a specified
             function, with the possibility of control flow transfer to either
             the ‘normal’ label or the ‘exception’ label. If the callee function
             returns with the “ret” instruction, control flow will return to the
             “normal” label. If the callee (or any indirect callees) returns via
             the “resume” instruction or other exception handling mechanism,
             control is interrupted and continued at the dynamically nearest
             “exception” label. (Ref:
             http://llvm.org/docs/LangRef.html#invoke-instruction)
          */
          else if (auto *II = dyn_cast<InvokeInst>(&instruction))
            ++abnormalEdge;

          if (UnaryOperator *UN = dyn_cast<UnaryOperator>(&instruction))
            ++numOfUnaryOperations;
          else if (BinaryOperator *BIO =
                       dyn_cast<BinaryOperator>(&instruction)) {

            Value *firstBinOp = BIO->getOperand(0);
            Value *secondBinOp = BIO->getOperand(1);
            Type *firstBinOpTy = BIO->getOperand(0)->getType();
            Type *secondBinOpTy = BIO->getOperand(1)->getType();

            if ((firstBinOpTy->isIntegerTy()) && (secondBinOpTy->isIntegerTy()))
              ++numOfIntOperations;
            else if ((firstBinOpTy->isFloatingPointTy()) &&
                     (secondBinOpTy->isFloatingPointTy()))
              ++numOfFloatOperations;
            else if ((firstBinOpTy->isPointerTy()) ||
                     (secondBinOpTy->isPointerTy()))
              ++ptrArithmetic;

            if ((isa<ConstantInt>(firstBinOp)) ||
                (isa<ConstantInt>(secondBinOp)))
              ++oneOperandConst;
          }

          if (isa<PHINode>(&instruction)) {
            /* The num of operands is the num of arguments for a phi node*/
            unsigned phiOperands = instruction.getNumOperands();
            localPhiArgs += phiOperands;
            totalPhiArgs += phiOperands;
            ++phiCounterBlock;
            ++totalPhi;
          }

          if ((instructionTy->isVoidTy()) == 0) {
            ++assigmentInstructions;
            /* Number of assignment instructions with the left operand
             an integer constant in the method. Here, a left operand is
             being considered as the first operand in instruction with
             two operands. */
            if (numOperands == 2) {
              if (ConstantInt *intConst =
                      dyn_cast<ConstantInt>(instruction.getOperand(0))) {
                ++leftOpIntConst;
              }
            }

            if (instructionTy->isPointerTy())
              ++localPtrVar;
          }

          if (isa<AllocaInst>(&instruction) == 0) {
            for (Use &U : instruction.operands()) {
              if (isa<Instruction>(U)) {
                varRefTemp.insert(U);
                ++numRefeOfLocalVar;
              }

              if (ConstantInt *zeroOne = dyn_cast<ConstantInt>(U)) {
                Type *getTypeBits = zeroOne->getType();

                if (getTypeBits->isIntegerTy(32))
                  ++constInt32bits;
                else if (getTypeBits->isIntegerTy(64))
                  ++constInt64bits;
                if ((zeroOne->getSExtValue()) == 0 &&
                    (getTypeBits->isIntegerTy()))
                  ++constInt0;
                else if ((zeroOne->getSExtValue() == 1) &&
                         (getTypeBits->isIntegerTy()))
                  ++constInt1;
              }

              if (GlobalVariable *GV = dyn_cast<GlobalVariable>(U)) {
                ExterRefVarTemp.insert(GV);
                if (GV->getNumOperands()) {
                  Type *getType = GV->getOperand(0)->getType();
                  if (getType->isPointerTy()) {
                    ++staticPtrVar;
                  }
                }
                /* getInitializer() it's illegal if the GV is external.
                if (Constant* constValeu = GV->getInitializer()) {
                  errs() << "const: " << *constValeu << "\n";
                }*/
                ++defUseCounter;
              }
            }
          }

          if (GEPOperator *gepo = dyn_cast<GEPOperator>(&instruction)) {
            for (auto it = gepo->idx_begin(), et = gepo->idx_end(); it != et;
                 it++) {
              if (GlobalVariable *gv = dyn_cast<GlobalVariable>(*it)) {
                //++defUseCounter;
              }
            }
          }
          ++numInstructions;
        }

        if (phiCounterBlock > 3) {
          ++blockPhiGreater3Nodes;
        } else if ((phiCounterBlock >= 0) && (phiCounterBlock <= 3)) {
          ++blockPhiIntervalNodes;
        }

        if (localPhiArgs > 5) {
          ++blocksPhiGreater5Arg;
        } else if ((localPhiArgs > 0) && (localPhiArgs < 6)) {
          ++blocksPhiIntervalArg;
        }

        if (phiCounterBlock != 0)
          ++blockWithPhi;

        unsigned instPerBB = block.size();
        if (instPerBB < 15)
          ++instructionLess15;
        else if ((instPerBB >= 15) && (instPerBB <= 500))
          ++instructionInterval;
        else if (instPerBB > 500)
          ++instructionGreater500;
      }

      if (totalPhiArgs == 0)
        averagePhiArgs = 0.0;
      else {
        averagePhiArgs = (float)totalPhiArgs / totalPhi;
      }

      /* In case of functions like printf*/
      if (totalBasicBlocks == 0) {
        instructionAverage = 0;
        averagePhi = 0;
      } else {
        averagePhi = (float)totalPhi / totalBasicBlocks;
        instructionAverage = (float)numInstructions / totalBasicBlocks;
      }

      refLocalVariable = varRefTemp.size();
      refExterVariable = ExterRefVarTemp.size();
      blockWithoutPhi = totalBasicBlocks - blockWithPhi;


      this->measures.push_back(
        fname.str() + "," +
        std::to_string(totalBasicBlocks) + "," +
        std::to_string(oneSuccessor) + "," +
        std::to_string(twoSuccessor) + "," +
        std::to_string(greaterTwoSuccessor) + "," +
        std::to_string(onePredecessor) + "," +
        std::to_string(twoPredecessor) + "," +
        std::to_string(greaterTwoPredecessor) + "," +
        std::to_string(onePredSuc) + "," +
        std::to_string(onePred_twoSuc) + "," +
        std::to_string(twoPred_oneSuc) + "," +
        std::to_string(twoPredSuc) + "," +
        std::to_string(greaterTwoPredSuc) + "," +
        std::to_string(instructionLess15) + "," +
        std::to_string(instructionInterval) + "," +
        std::to_string(instructionGreater500) + "," +
        std::to_string(numOfEdges) + "," +
        std::to_string(numOfCriticalEdges) + "," +
        std::to_string(abnormalEdge) + "," +
        std::to_string(directCalls) + "," +
        std::to_string(condBranch) + "," +
        std::to_string(assigmentInstructions) + "," +
        std::to_string(uncondBranch) + "," +
        std::to_string(numOfIntOperations) + "," +
        std::to_string(numOfFloatOperations) + "," +
        std::to_string(numInstructions) + "," +
        std::to_string(instructionAverage) + "," +
        std::to_string(averagePhi) + "," +
        std::to_string(averagePhiArgs) + "," +
        std::to_string(blockWithoutPhi) + "," +
        std::to_string(blockPhiIntervalNodes) + "," +
        std::to_string(blockPhiGreater3Nodes) + "," +
        std::to_string(blocksPhiGreater5Arg) + "," +
        std::to_string(blocksPhiIntervalArg) + "," +
        std::to_string(numOfSwitchInstruction) + "," +
        std::to_string(numOfUnaryOperations) + "," +
        std::to_string(ptrArithmetic) + "," +
        std::to_string(indirectRefs) + "," +
        std::to_string(addresVar) + "," +
        std::to_string(addressFunction) + "," +
        std::to_string(indirectCalls) + "," +
        std::to_string(leftOpIntConst) + "," +
        std::to_string(oneOperandConst) + "," +
        std::to_string(callArgPtrType) + "," +
        std::to_string(call4args) + "," +
        std::to_string(ptrRetCallType) + "," +
        std::to_string(intRetCallType) + "," +
        std::to_string(constInt0) + "," +
        std::to_string(constInt32bits) + "," +
        std::to_string(constInt1) + "," +
        std::to_string(constInt64bits) + "," +
        std::to_string(numRefeOfLocalVar) + "," +
        std::to_string(defUseCounter) + "," +
        std::to_string(refLocalVariable) + "," +
        std::to_string(refExterVariable) + "," +
        std::to_string(localPtrVar) + "," +
        std::to_string(staticPtrVar)
      );
    }
  }
}


void CGAnalyzerPass::print() {
  for(auto& line : this->measures) {
    this->OS << line << '\n';
  }
}


PreservedAnalyses CGAnalyzerPass::run(llvm::Module &M,
                                      llvm::ModuleAnalysisManager &MAM) {

    this->measures.push_back(
      "functionName,"
      "f01_totalBasicBlocks,"
      "f02_oneSuccessor,"
      "f03_twoSuccessor,"
      "f04_greaterTwoSuccessor,"
      "f05_onePredecessor,"
      "f06_twoPredecessor,"
      "f07_greaterTwoPredecessor,"
      "f08_onePredSuc,"
      "f09_onePred_twoSuc,"
      "f10_twoPred_oneSuc,"
      "f11_twoPredSuc,"
      "f12_greaterTwoPredSuc,"
      "f13_instructionLess15,"
      "f14_instructionInterval,"
      "f15_instructionGreater500,"
      "f16_numOfEdges,"
      "f17_numOfCriticalEdges,"
      "f18_abnormalEdge,"
      "f19_directCalls,"
      "f20_condBranch,"
      "f21_assigmentInstructions,"
      "f22_uncondBranch,"
      "f23_numOfIntOperations,"
      "f24_numOfFloatOperations,"
      "f25_numInstructions,"
      "f26_instructionAverage,"
      "f27_averagePhi,"
      "f28_averagePhiArgs,"
      "f29_blockWithoutPhi,"
      "f30_blockPhiIntervalNodes,"
      "f31_blockPhiGreater3Nodes,"
      "f32_blocksPhiGreater5Arg,"
      "f33_blocksPhiIntervalArg,"
      "f34_numOfSwitchInstruction,"
      "f35_numOfUnaryOperations,"
      "f36_ptrArithmetic,"
      "f37_indirectRefs,"
      "f38_addresVar,"
      "f39_addressFunction,"
      "f40_indirectCalls,"
      "f41_leftOpIntConst,"
      "f42_oneOperandConst,"
      "f43_callArgPtrType,"
      "f44_call4args,"
      "f45_ptrRetCallType,"
      "f46_intRetCallType,"
      "f47_constInt0,"
      "f48_constInt32bits,"
      "f49_constInt1,"
      "f50_constInt64bits,"
      "f51_numRefeOfLocalVar,"
      "f52_defUseCounter,"
      "f53_refLocalVariable,"
      "f54_refExterVariable,"
      "f55_localPtrVar,"
      "f56_staticPtrVar"
    ); 

    this->visitor(M, MAM);
    this->print();
    return PreservedAnalyses::all();
}

} // namespace cganalyzer_nm