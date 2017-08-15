OBJ_DIR = ./obj
BIN_DIR = ./bin
SRC_DIR = ./
OBJS = \
	   $(OBJ_DIR)/algo_aes.o \
	   $(OBJ_DIR)/main.o
TARGET = $(BIN_DIR)/main
INC_OPT = -I./
LNK_OPT = -lssl

all:clean chkobjdir chkbindir $(OBJS) $(TARGET) \
#	test

$(TARGET):
	gcc -g -o $@ $(OBJS) $(LNK_OPT)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	gcc -g $(INC_OPT) -c -o $@ $<

chkobjdir:
	@if test ! -d $(OBJ_DIR); then  \
		mkdir $(OBJ_DIR);  \
	fi

chkbindir:
	@if test ! -d $(BIN_DIR); then  \
		mkdir $(BIN_DIR);  \
	fi

clean:
	rm -rf $(BIN_DIR)
	rm -rf $(OBJ_DIR)

test:
	@./bin/main
