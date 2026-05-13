#include "languageGenerator.h"


#include "../shared/consts.h"

#include "c/cGenerator.h"
#include "cpp/cppGenerator.h"
#include "go/goGenerator.h"
#include "julia/juliaGenerator.h"
#include "mlir/mlirGenerator.h"
#include "rust/rustGenerator.h"
#include "v/vGenerator.h"
#include "carbon/carbonGenerator.h"
#include "zig/zigGenerator.h"
#include "odin/odinGenerator.h"
#include "d/dGenerator.h"
#include "nim/nimGenerator.h"


ProgrammingLanguageGenerator::ProgrammingLanguageGenerator(){};
ProgrammingLanguageGenerator::~ProgrammingLanguageGenerator(){};

void ProgrammingLanguageGenerator::addLine(std::vector<std::string> lines, int d){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).addLine(lines, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).addLine(lines, d);
    }
};

void ProgrammingLanguageGenerator::addLine(std::string line, int d){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).addLine(line, d);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).addLine(line, d);
    }
};

void ProgrammingLanguageGenerator::startScope(){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).startScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).startScope();
    }
};

void ProgrammingLanguageGenerator::startFunc(int funcId, int nParameters){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).startFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).startFunc(funcId, nParameters);
    }
};

bool ProgrammingLanguageGenerator::functionExists(int funcId){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).functionExists(funcId);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).functionExists(funcId);
    }
};

void ProgrammingLanguageGenerator::callFunc(int funcId, int nParameters){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).callFunc(funcId, nParameters);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).callFunc(funcId, nParameters);
    }
};

int ProgrammingLanguageGenerator::addVar(std::string type){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).addVar(type);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).addVar(type);
    }
};

void ProgrammingLanguageGenerator::freeVars(bool hasReturn, int returnVarPos){

    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).freeVars(hasReturn, returnVarPos);
    }
};


void ProgrammingLanguageGenerator::returnFunc(int returnVarPos){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).returnFunc(returnVarPos);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).returnFunc(returnVarPos);
    }
};

void ProgrammingLanguageGenerator::endScope(){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).endScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).endScope();
    }
};


void ProgrammingLanguageGenerator::endIfScope(){
    if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).endIfScope();
    }if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).endIfScope();
    }if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).endIfScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).endIfScope();
	}else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
	{
		ZigGenerator(this->varType).endIfScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).endIfScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).endIfScope();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).endIfScope();
    }
};

void ProgrammingLanguageGenerator::endFunc(){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).endFunc();
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).endFunc();
    }
};


void ProgrammingLanguageGenerator::generateFiles(std::string benchmarkName){
    if (ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::C)
    {
        CGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CPP)
    {
        CppGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        RustGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        JuliaGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        GoGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        VGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        CarbonGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        ZigGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        OdinGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        NimGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        DGenerator(this->varType).generateFiles(benchmarkName);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        MlirGenerator(this->varType).generateFiles(benchmarkName);
    }
};

ProgrammingLanguageGenerator* ProgrammingLanguageGenerator::getGenerator(std::string language, std::string varType)
{
    if(language == ProgrammingLanguage::C)
    {
        return new CGenerator(varType);
    }else if(language == ProgrammingLanguage::CPP)
    {
        return new CppGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::RUST)
    {
        return new RustGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::JULIA)
    {
        return new JuliaGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::GO)
    {
        return new GoGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::V)
    {
        return new VGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::CARBON)
    {
        return new CarbonGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ZIG)
    {
        return new ZigGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::ODIN)
    {
        return new OdinGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::NIM)
    {
        return new NimGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::D)
    {
        return new DGenerator(varType);
    }else if(ProgrammingLanguage::LANGUAGE == ProgrammingLanguage::MLIR)
    {
        return new MlirGenerator(varType);
    }

    return nullptr;
}
