#include "adaGenerator.h"

void AdaGenerator::generateGlobalVars() {
    std::vector<std::string> varGlobalVars = VariableFactory::genGlobalVars(varType);
    for (auto& gVar : varGlobalVars) {
        globalVars.push_back(gVar);
    }
}

void AdaGenerator::generateMainFunction() {
    mainFunction = GeneratorFunction(-1);
    // Statements only; the procedure header, declarative part and `end` are
    // stitched in genMainFile. The two trailing `null;` lines are anchors that
    // insertBack inserts generated body statements before.
    mainFunction.addLine({
        "Benchgen_Srand (0);",
        "declare",
        "   Arg_Index : Integer := 1;",
        "begin",
        "   while Arg_Index <= Argument_Count loop",
        "      if Argument (Arg_Index) = \"-path-seed\" then",
        "         Arg_Index := Arg_Index + 1;",
        "         if Arg_Index <= Argument_Count then",
        "            Benchgen_Srand (Unsigned_64'Value (Argument (Arg_Index)));",
        "         end if;",
        "      elsif Argument (Arg_Index) = \"-loops-factor\" then",
        "         Arg_Index := Arg_Index + 1;",
        "         if Arg_Index <= Argument_Count then",
        "            Loops_Factor := Integer'Value (Argument (Arg_Index));",
        "         end if;",
        "      end if;",
        "      Arg_Index := Arg_Index + 1;",
        "   end loop;",
        "end;",
        "null;",
        "null;"
    });
    mainFunction.insertBack = true;
    currentFunction.push(&mainFunction);
    startScope();
}

void AdaGenerator::addDeclaration(const std::string& decl) {
    if (currentFunction.top()->insertBack) {
        mainDeclarations.push_back(decl);
    } else {
        funcDeclarations[currentFunction.top()->getId()].push_back(decl);
    }
}

void AdaGenerator::addArrayDeclaration(const std::string& name) {
    addDeclaration(name + " : Array_T_Access;");
}

void AdaGenerator::addLine(std::string line, int d) {
    std::string indentedLine = currentScope.top().getIndentationTabs(d) + line;
    currentFunction.top()->addLine(indentedLine);
}

void AdaGenerator::addLine(std::vector<std::string> lines, int d) {
    for (auto line : lines) {
        addLine(line, d);
    }
}

void AdaGenerator::startScope() {
    GeneratorScope scope = GeneratorScope(currentScope.top().avaiableVarsID, currentScope.top().avaiableParamsID, currentScope.top().getIndentation());
    currentScope.push(scope);
}

void AdaGenerator::startFunc(int funcId, int nParameters) {
    GeneratorFunction func = GeneratorFunction(funcId);
    std::string sig = "function Func" + std::to_string(funcId) + " (Vars : access Array_T_Param; ";
    for (int i = 0; i < nParameters; i++) {
        sig += "PATH" + std::to_string(i) + " : Unsigned_64; ";
    }
    sig += "Loops_Factor : Integer) return Array_T_Access";
    func.addLine(sig);
    functions.push_back(func);
    currentFunction.push(&(functions.back()));
    GeneratorScope scope = GeneratorScope();
    currentScope.push(scope);
    this->ifCounter.push(0);
    // Ensure a declaration bucket exists for this function id.
    funcDeclarations[funcId];
}

bool AdaGenerator::functionExists(int funcId) {
    for (auto func : functions) {
        if (func.getId() == funcId) {
            return true;
        }
    }
    return false;
}

std::string AdaGenerator::createParams() {
    std::string name = "Params" + std::to_string(paramCounter++);
    addDeclaration(name + " : aliased Array_T_Param;");
    std::vector<GeneratorVariable*> varsParams;
    for (int i = 0; i < (int)currentScope.top().avaiableVarsID.size(); i++) {
        varsParams.push_back(variables[currentScope.top().avaiableVarsID[i]]);
    }
    std::vector<std::string> params = VariableFactory::genParams(varType, name, varsParams);
    addLine(params);
    return name;
}

void AdaGenerator::callFunc(int funcId, int nParameters) {
    std::string param = createParams();

    int id = addVar(varType);
    GeneratorVariable* var = variables[id];
    addArrayDeclaration(var->name);

    std::string line = var->name + " := Func" + std::to_string(funcId) + " (" + param + "'Access, ";
    for (int i = 0; i < nParameters; i++) {
        line += "Get_Path, ";
    }
    line += "Loops_Factor);";
    addLine(line);

    addLine("Debug_Return (" + var->name + ".Id);");
    addLine("Free_Ptr_Array (" + param + ".Data);");
}

int AdaGenerator::addVar(std::string type) {
    this->variables[varCounter] = VariableFactory::createVariable(type, varCounter);
    this->currentScope.top().addVar(varCounter);
    return varCounter++;
}

void AdaGenerator::freeVars(bool hasReturn, int returnVarPos) {
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

void AdaGenerator::returnFunc(int returnVarPos) {
    GeneratorVariable* var = variables[currentScope.top().avaiableVarsID[returnVarPos]];
    addLine("return " + var->name + ";");
}

void AdaGenerator::endScope() {
    currentScope.pop();
}

void AdaGenerator::endFunc() {
    currentScope.pop();
    currentFunction.pop();
    ifCounter.pop();
}

void AdaGenerator::endIfScope() {
    currentScope.pop();
}

void AdaGenerator::genTypesPackage(const std::string& dir) {
    std::ofstream spec;
    spec.open(dir + "bench_types.ads");
    spec << "with Interfaces; use Interfaces;\n";
    spec << "with Ada.Unchecked_Deallocation;\n";
    spec << "package Bench_Types is\n";
    for (auto& line : globalVars) {
        spec << "   " << line << "\n";
    }
    spec << "   procedure Free_Array is new Ada.Unchecked_Deallocation (Array_T, Array_T_Access);\n";
    spec << "   procedure Free_Storage is new Ada.Unchecked_Deallocation (Array_Storage, Array_Storage_Access);\n";
    spec << "   procedure Free_Ptr_Array is new Ada.Unchecked_Deallocation (Array_T_Ptr_Array, Array_T_Ptr_Array_Access);\n";
    spec << "   procedure Benchgen_Srand (Seed : Unsigned_64);\n";
    spec << "   function Benchgen_Rand return Unsigned_64;\n";
    spec << "   procedure Debug_New (Id : Integer);\n";
    spec << "   procedure Debug_Copy (Id : Integer);\n";
    spec << "   procedure Debug_Return (Id : Integer);\n";
    spec << "   procedure Debug_Free (Id : Integer);\n";
    spec << "end Bench_Types;\n";
    spec.close();

    std::ofstream body;
    body.open(dir + "bench_types.adb");
    body << "package body Bench_Types is\n";
    body << "   State : Unsigned_64 := 1;\n\n";
    body << "   procedure Benchgen_Srand (Seed : Unsigned_64) is\n";
    body << "   begin\n";
    body << "      State := Seed;\n";
    body << "   end Benchgen_Srand;\n\n";
    body << "   function Benchgen_Rand return Unsigned_64 is\n";
    body << "   begin\n";
    body << "      State := 6364136223846793005 * State + 1;\n";
    body << "      return Shift_Right (State, 32);\n";
    body << "   end Benchgen_Rand;\n\n";
    const char* names[] = {"Debug_New", "Debug_Copy", "Debug_Return", "Debug_Free"};
    for (auto& dn : names) {
        body << "   procedure " << dn << " (Id : Integer) is\n";
        body << "      pragma Unreferenced (Id);\n";
        body << "   begin\n";
        body << "      null;\n";
        body << "   end " << dn << ";\n\n";
    }
    body << "end Bench_Types;\n";
    body.close();
}

void AdaGenerator::genPathPackage(const std::string& dir) {
    std::ofstream spec;
    spec.open(dir + "path_pkg.ads");
    spec << "with Interfaces; use Interfaces;\n";
    spec << "package Path_Pkg is\n";
    spec << "   function Get_Path return Unsigned_64;\n";
    spec << "end Path_Pkg;\n";
    spec.close();

    std::ofstream body;
    body.open(dir + "path_pkg.adb");
    body << "with Bench_Types; use Bench_Types;\n";
    body << "with Ada.Environment_Variables;\n";
    body << "package body Path_Pkg is\n";
    body << "   function Get_Path return Unsigned_64 is\n";
    body << "   begin\n";
    body << "      if Ada.Environment_Variables.Exists (\"BENCH_PATH\") then\n";
    body << "         return Unsigned_64'Value (Ada.Environment_Variables.Value (\"BENCH_PATH\"));\n";
    body << "      else\n";
    body << "         declare\n";
    body << "            Hi : constant Unsigned_64 := Benchgen_Rand;\n";
    body << "            Lo : constant Unsigned_64 := Benchgen_Rand;\n";
    body << "         begin\n";
    body << "            return Shift_Left (Hi, 32) or Lo;\n";
    body << "         end;\n";
    body << "      end if;\n";
    body << "   end Get_Path;\n";
    body << "end Path_Pkg;\n";
    body.close();
}

void AdaGenerator::genFuncFiles(const std::string& dir, const std::vector<int>& funcIds) {
    for (auto& func : functions) {
        int id = func.getId();
        std::string pkg = "Func" + std::to_string(id) + "_Pkg";
        std::string stem = "func" + std::to_string(id) + "_pkg";
        std::string sig = func.getLines().front();

        std::ofstream spec;
        spec.open(dir + stem + ".ads");
        spec << "with Bench_Types; use Bench_Types;\n";
        spec << "with Interfaces; use Interfaces;\n";
        spec << "package " << pkg << " is\n";
        spec << "   " << sig << ";\n";
        spec << "end " << pkg << ";\n";
        spec.close();

        std::ofstream body;
        body.open(dir + stem + ".adb");
        body << "with Bench_Types; use Bench_Types;\n";
        body << "with Path_Pkg; use Path_Pkg;\n";
        for (int other : funcIds) {
            if (other == id) continue;
            body << "with Func" << other << "_Pkg; use Func" << other << "_Pkg;\n";
        }
        body << "package body " << pkg << " is\n";
        body << "   " << sig << " is\n";
        body << "      P_Counter : Natural := Vars.Size;\n";
        for (auto& decl : funcDeclarations[id]) {
            body << "      " << decl << "\n";
        }
        body << "   begin\n";
        auto lines = func.getLines();
        for (size_t i = 1; i < lines.size(); i++) {
            body << "      " << lines[i] << "\n";
        }
        body << "   end Func" << id << ";\n";
        body << "end " << pkg << ";\n";
        body.close();
    }
}

void AdaGenerator::genMainFile(const std::string& dir, const std::string& mainName) {
    std::ofstream main;
    main.open(dir + mainName + ".adb");
    main << "with Bench_Types; use Bench_Types;\n";
    main << "with Path_Pkg; use Path_Pkg;\n";
    for (auto& func : functions) {
        int id = func.getId();
        main << "with Func" << id << "_Pkg; use Func" << id << "_Pkg;\n";
    }
    main << "with Ada.Command_Line; use Ada.Command_Line;\n";
    main << "with Interfaces; use Interfaces;\n";
    main << "procedure " << mainName << " is\n";
    main << "   Loops_Factor : Integer := 100;\n";
    for (auto& decl : mainDeclarations) {
        main << "   " << decl << "\n";
    }
    main << "begin\n";
    for (auto& line : mainFunction.getLines()) {
        main << "   " << line << "\n";
    }
    main << "end " << mainName << ";\n";
    main.close();
}

void AdaGenerator::genMakefile(const std::string& dir, const std::string& target) {
    std::ofstream makefile;
    makefile.open(dir + "Makefile");
    makefile << "TARGET = " << target << "\n";
    makefile << "SRC_DIR = src\n";
    makefile << "GNATMAKE = gnatmake\n";
    makefile << "GNATFLAGS = -O2 -gnatp\n";
    makefile << "\n";
    makefile << "all: $(TARGET)\n";
    makefile << "\n";
    makefile << "$(TARGET):\n";
    makefile << "\t$(GNATMAKE) $(GNATFLAGS) -I$(SRC_DIR) $(SRC_DIR)/$(TARGET).adb -o $(TARGET)\n";
    makefile << "\n";
    makefile << "clean:\n";
    makefile << "\trm -f $(TARGET) *.o *.ali $(SRC_DIR)/*.o $(SRC_DIR)/*.ali\n";
}

void AdaGenerator::genReadme(const std::string& dir, const std::string& target) {
    std::ofstream readme;
    readme.open(dir + "README.md");
    readme << "# " + target + " Program\n\n";
    readme << "This program was generated by the **BenchGen** tool.\n\n";
    readme << "## Compilation\n\n";
    readme << "```bash\n";
    readme << "make\n";
    readme << "```\n\n";
    readme << "This will create the executable file `" + target + "` using `gnatmake`.\n\n";
    readme << "## Run\n\n";
    readme << "```bash\n";
    readme << "./" + target + "\n";
    readme << "```\n\n";
    readme << "### Optional Arguments\n\n";
    readme << "-   `-path-seed <seed>`: Sets the seed for the random number generator. Default is `0`.\n\n";
    readme << "-   `-loops-factor <factor>`: Sets the factor for the number of loops. Default is `100`.\n\n";
    readme << "#### Example:\n\n";
    readme << "```bash\n";
    readme << "./" + target + " -loops-factor 50 -path-seed 123\n";
    readme << "```";
}

void AdaGenerator::generateFiles(std::string benchmarkName) {
    std::string benchDir = benchmarkName + "/";
    std::string sourceDir = benchDir + "src/";
    std::string baseName = std::filesystem::path(benchmarkName).filename().string();

    std::filesystem::create_directory(benchDir);
    std::filesystem::create_directory(sourceDir);

    std::vector<int> funcIds;
    for (auto& func : functions) {
        funcIds.push_back(func.getId());
    }

    genTypesPackage(sourceDir);
    genPathPackage(sourceDir);
    genFuncFiles(sourceDir, funcIds);
    genMainFile(sourceDir, baseName);
    genMakefile(benchDir, baseName);
    genReadme(benchDir, baseName);
}
