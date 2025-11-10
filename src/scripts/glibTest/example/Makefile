CC = clang
LLVMFLAGS = -DDEBUG -S -emit-llvm
TARGET = tmpaeyzc_i_
SRC_DIR = src
OBJ_DIR = obj
LL_DIR = ll
GLIB_CFLAGS = $(shell pkg-config --cflags glib-2.0)
GLIB_LIBS = $(shell pkg-config --libs glib-2.0)

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
LL = $(patsubst $(SRC_DIR)/%.c, $(LL_DIR)/%.ll, $(SRC))

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) ${CFLAGS} $(OBJ) -o $(TARGET) $(GLIB_LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) ${CFLAGS} $(GLIB_CFLAGS) -c $< -o $@

$(LL_DIR)/%.ll: $(SRC_DIR)/%.c | $(LL_DIR)
	$(CC) ${LLVMFLAGS} $< -o $@

$(OBJ_DIR) $(LL_DIR):
	mkdir -p $@

llvm: $(LL)
	$(CC) ./ll/*.ll -o llvm_${TARGET}

clean:
	rm -f $(OBJ) $(LL) $(TARGET) llvm_${TARGET}
	rm -rf $(OBJ_DIR) $(LL_DIR)

