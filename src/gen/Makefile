CC = clang++
CFLAGS = -std=c++20 -Wall
IMP = ./imports/
SRC = ./src/
OBJ = ./obj/
TARGET = benchGen
#Dependencies in objects. Add more here when creating new files!
DEPS = $(OBJ)factory.o $(OBJ)languageAst.o $(OBJ)cAst.o $(OBJ)cppAst.o $(OBJ)rustAst.o $(OBJ)juliaAst.o $(OBJ)generatorFunction.o  $(OBJ)generatorVariable.o $(OBJ)cGeneratorVariable.o $(OBJ)cppGeneratorVariable.o $(OBJ)rustGeneratorVariable.o $(OBJ)juliaGeneratorVariable.o $(OBJ)juliaGenerator.o $(OBJ)generatorScope.o $(OBJ)languageGenerator.o $(OBJ)cGenerator.o $(OBJ)cppGenerator.o $(OBJ)rustGenerator.o $(OBJ)lexer.o $(OBJ)lSystem.o $(OBJ)parser.o $(OBJ)CodeGeneratorDriver.o
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
$(OBJ)rustAst.o: ast/rust/rustAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)juliaAst.o: ast/julia/juliaAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)factory.o: generator/factory.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)generatorFunction.o: generator/generatorFunction.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)generatorVariable.o: generator/generatorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cGeneratorVariable.o: generator/c/cGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)cppGeneratorVariable.o: generator/cpp/cppGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)rustGeneratorVariable.o: generator/rust/rustGeneratorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@ -Wno-return-type
$(OBJ)juliaGeneratorVariable.o: generator/julia/juliaGeneratorVariable.cpp | $(OBJ)
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
