CC = clang++
CFLAGS = -g -std=c++20 -Wall
IMP = ./imports/
SRC = ./src/
OBJ = ./obj/
TARGET = benchGen
#Dependencies in objects. Add more here when creating new files!
DEPS = $(OBJ)factory.o \
	   $(OBJ)languageAst.o \
	   $(OBJ)cAst.o \
	   $(OBJ)cppAst.o \
	   $(OBJ)rustAst.o \
	   $(OBJ)juliaAst.o \
	   $(OBJ)goAst.o \
	   $(OBJ)vAst.o \
	   $(OBJ)carbonAst.o \
	   $(OBJ)zigAst.o \
	   $(OBJ)odinAst.o \
	   $(OBJ)dAst.o \
	   $(OBJ)mlirAst.o \
	   $(OBJ)generatorFunction.o  \
	   $(OBJ)generatorVariable.o \
	   $(OBJ)cGeneratorVariable.o \
	   $(OBJ)cppGeneratorVariable.o \
	   $(OBJ)rustGeneratorVariable.o \
	   $(OBJ)juliaGeneratorVariable.o  \
	   $(OBJ)goGeneratorVariable.o \
	   $(OBJ)vGeneratorVariable.o \
	   $(OBJ)carbonGeneratorVariable.o \
	   $(OBJ)zigGeneratorVariable.o \
	   $(OBJ)odinGeneratorVariable.o \
	   $(OBJ)dGeneratorVariable.o \
	   $(OBJ)mlirGeneratorVariable.o \
	   $(OBJ)generatorScope.o \
	   $(OBJ)languageGenerator.o \
	   $(OBJ)juliaGenerator.o \
	   $(OBJ)mlirGenerator.o \
	   $(OBJ)cGenerator.o \
	   $(OBJ)cppGenerator.o \
	   $(OBJ)rustGenerator.o \
	   $(OBJ)goGenerator.o \
	   $(OBJ)vGenerator.o \
	   $(OBJ)carbonGenerator.o \
	   $(OBJ)zigGenerator.o \
	   $(OBJ)odinGenerator.o \
	   $(OBJ)dGenerator.o \
	   $(OBJ)lexer.o \
	   $(OBJ)lSystem.o \
	   $(OBJ)parser.o \
	   $(OBJ)CodeGeneratorDriver.o
#SHARED = $(IMP)ast.h $(IMP)enums.h $(IMP)globalIncludes.h $(IMP)globalStructs.h

$(TARGET): $(DEPS) 
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): 
	mkdir $(OBJ)

# One rule per dependency. Add more here when creating new files!
$(OBJ)languageAst.o: ast/languageAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cAst.o: ast/c/cAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cppAst.o: ast/cpp/cppAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)mlirAst.o: ast/mlir/mlirAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)rustAst.o: ast/rust/rustAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)juliaAst.o: ast/julia/juliaAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)goAst.o: ast/go/goAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)vAst.o: ast/v/vAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)carbonAst.o: ast/carbon/carbonAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)zigAst.o: ast/zig/zigAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)odinAst.o: ast/odin/odinAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)dAst.o: ast/d/dAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)factory.o: generator/factory.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)generatorFunction.o: generator/generatorFunction.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)generatorVariable.o: generator/generatorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)mlirGeneratorVariable.o: generator/mlir/mlirGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cGeneratorVariable.o: generator/c/cGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cppGeneratorVariable.o: generator/cpp/cppGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)rustGeneratorVariable.o: generator/rust/rustGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)juliaGeneratorVariable.o: generator/julia/juliaGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)goGeneratorVariable.o: generator/go/goGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)vGeneratorVariable.o: generator/v/vGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)carbonGeneratorVariable.o: generator/carbon/carbonGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)zigGeneratorVariable.o: generator/zig/zigGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)odinGeneratorVariable.o: generator/odin/odinGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)dGeneratorVariable.o: generator/d/dGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)generatorScope.o: generator/generatorScope.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)languageGenerator.o: generator/languageGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cGenerator.o: generator/c/cGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cppGenerator.o: generator/cpp/cppGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)rustGenerator.o: generator/rust/rustGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)juliaGenerator.o: generator/julia/juliaGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)goGenerator.o: generator/go/goGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)vGenerator.o: generator/v/vGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)carbonGenerator.o: generator/carbon/carbonGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)zigGenerator.o: generator/zig/zigGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)odinGenerator.o: generator/odin/odinGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)dGenerator.o: generator/d/dGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)mlirGenerator.o: generator/mlir/mlirGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)lexer.o: lexer/lexer.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)lSystem.o: lSystem/lSystem.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)parser.o: parser/parser.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)CodeGeneratorDriver.o: CodeGeneratorDriver.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type

clean: 
	rm -f $(OBJ)*.o
	rm -f $(TARGET)
