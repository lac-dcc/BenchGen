CC=clang
CARGS=-Wl,--wrap,malloc,--wrap,free
OBJ=obj/example.o obj/Dalloc.o

all: example

# gcc -Wl,--wrap,malloc,--wrap,free prog.o Dalloc.o
example: $(OBJ)
	$(CC) $(CARGS) -o $@ $^

$(OBJ): obj/%.o: src/%.cpp src/Dalloc.h | obj
	$(CC) -c -o $@ $<

obj: 
	mkdir -p obj

