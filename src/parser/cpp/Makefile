CC = clang++
CFLAGS = -Wall
IMP = ./imports/
SRC = ./src/
OBJ = ./obj/
TARGET = main
#Dependencies in objects. Add more here when creating new files!
DEPS = $(OBJ)generatorScope.o $(OBJ)generator.o $(OBJ)lexer.o $(OBJ)lSystem.o $(OBJ)parser.o $(OBJ)main.o
#SHARED = $(IMP)ast.h $(IMP)enums.h $(IMP)globalIncludes.h $(IMP)globalStructs.h

$(TARGET): $(DEPS) 
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): 
	mkdir $(OBJ)

# One rule per dependency. Add more here when creating new files!
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
$(OBJ)main.o: main.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@

clean: 
	rm $(OBJ)*
	rm $(TARGET)
