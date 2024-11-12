CC = clang++
CFLAGS = -std=c++20 -Wall
IMP = ./imports/
OBJ = ./obj/
TARGET = grammarEnumerator
DEPS = $(OBJ)grammarEnumerator.o $(OBJ)Driver.o

$(TARGET): $(DEPS) 
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): 
	mkdir $(OBJ)

$(OBJ)grammarEnumerator.o: grammarEnumerator.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@
$(OBJ)Driver.o: Driver.cpp | $(OBJ)
	$(CC) $(CFLAGS) -I $(IMP) -c $^ -o $@

clean: 
	rm -r $(OBJ)
	rm $(TARGET)
