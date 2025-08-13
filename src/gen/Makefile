CC = clang++
CFLAGS = -std=c++20 -Wall
IMP = ./imports/
SRC = ./src/
OBJ = ./obj/
TARGET = benchGen
#Dependencies in objects. Add more here when creating new files!
DEPS = $(OBJ)factory.o $(OBJ)languageAst.o $(OBJ)cAst.o $(OBJ)cppAst.o $(OBJ)generatorFunction.o $(OBJ)generatorVariable.o $(OBJ)generatorScope.o $(OBJ)languageGenerator.o $(OBJ)cGenerator.o $(OBJ)cppGenerator.o $(OBJ)lexer.o $(OBJ)lSystem.o $(OBJ)parser.o $(OBJ)CodeGeneratorDriver.o
#SHARED = $(IMP)ast.h $(IMP)enums.h $(IMP)globalIncludes.h $(IMP)globalStructs.h

$(TARGET): $(DEPS) 
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): 
	mkdir $(OBJ)

# One rule per dependency. Add more here when creating new files!
$(OBJ)languageAst.o: ast/languageAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)cAst.o: ast/c/cAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)cppAst.o: ast/cpp/cppAst.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)factory.o: generator/c/factory.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)generatorFunction.o: generator/generatorFunction.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)generatorVariable.o: generator/c/generatorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)generatorScope.o: generator/generatorScope.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)languageGenerator.o: generator/languageGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)cGenerator.o: generator/c/cGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)cppGenerator.o: generator/cpp/cppGenerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)lexer.o: lexer/lexer.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)lSystem.o: lSystem/lSystem.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)parser.o: parser/parser.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)CodeGeneratorDriver.o: CodeGeneratorDriver.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@

clean: 
	rm -f $(OBJ)*.o
	rm -f $(TARGET)
