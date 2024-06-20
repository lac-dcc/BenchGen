CC = clang++
CFLAGS = -std=c++20 -Wall
IMP = ./imports/
SRC = ./src/
OBJ = ./obj/
TARGET = benchGen
#Dependencies in objects. Add more here when creating new files!
DEPS = $(OBJ)ast.o $(OBJ)generatorFunction.o $(OBJ)generatorVariable.o $(OBJ)generatorScope.o $(OBJ)generator.o $(OBJ)lexer.o $(OBJ)lSystem.o $(OBJ)parser.o $(OBJ)CodeGeneratorDriver.o
#SHARED = $(IMP)ast.h $(IMP)enums.h $(IMP)globalIncludes.h $(IMP)globalStructs.h

$(TARGET): $(DEPS) 
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): 
	mkdir $(OBJ)

# One rule per dependency. Add more here when creating new files!
$(OBJ)ast.o: ast/ast.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)generatorFunction.o: generator/generatorFunction.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)generatorVariable.o: generator/generatorVariable.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)generatorScope.o: generator/generatorScope.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)generator.o: generator/generator.cpp | $(OBJ)
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
	rm $(OBJ)*
	rm $(TARGET)
