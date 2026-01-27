CC = clang++
CFLAGS = -g -std=c++20 -Wall -fsanitize=address,undefined
SRC = ./src/
OBJ = ./obj/
TARGET = benchGen
DEPS = $(OBJ)ast.o \
			 $(OBJ)function.o \
			 $(OBJ)scope.o \
			 $(OBJ)generator.o \
			 $(OBJ)lexer.o \
			 $(OBJ)lSystem.o \
			 $(OBJ)parser.o \
			 $(OBJ)driver.o \
			 $(OBJ)carray.o

$(TARGET): $(DEPS) 
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): 
	mkdir $(OBJ)

$(OBJ)carray.o: lang/c/array.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)ast.o: ast/ast.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)function.o: generator/function.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)scope.o: generator/scope.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)generator.o: generator/generator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)lexer.o: lexer/lexer.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)lSystem.o: lSystem/lSystem.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)parser.o: parser/parser.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ)driver.o: driver.cpp | $(OBJ)
	$(CC) $(CFLAGS) -c $^ -o $@

clean: 
	rm $(OBJ)*
	rm $(TARGET)
