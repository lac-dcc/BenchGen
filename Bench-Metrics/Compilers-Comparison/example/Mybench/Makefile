CC ?= gcc
CFLAGS ?= 
TARGET = Mybench
SRC_DIR = src
OBJ_DIR = obj

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

$(TARGET)_$(CC): $(OBJ)
	$(CC) -o $(TARGET)_$(CC) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) -c $< -o $@ $(CFLAGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ) $(TARGET)_$(CC)

%.o: %.c
