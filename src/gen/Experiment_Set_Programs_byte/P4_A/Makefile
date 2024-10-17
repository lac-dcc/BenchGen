CC = clang
CFLAGS = -emit-llvm
TARGET = Experiment_Set_Programs/P4_A
SRC_DIR = src
OBJ_DIR = obj

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.bc, $(SRC))

$(TARGET)_$(CC).bc: $(OBJ)
	llvm-link -o $(TARGET)_$(CC).bc $(OBJ)

$(OBJ_DIR)/%.bc: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) ${CFLAGS} -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ) $(TARGET)_$(CC).bc

%.o: %.c
