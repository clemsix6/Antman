DEBUG = false

CC = gcc

ifeq ($(DEBUG),true)
	CC += -fsanitize=address -g3 -ggdb
endif

LIB_SRC = $(wildcard *.c)
LIB_OBJ = $(LIB_SRC:.c=.o)

CFLAGS = -W -Wall -Wextra

TARGET_LIB = libmy.a

all: $(TARGET_LIB)

$(TARGET_LIB): $(LIB_OBJ)
	ar src $(TARGET_LIB) $(LIB_OBJ)
	cp *.a ../

clean:
	rm -rf $(LIB_OBJ)

fclean: clean
	rm -rf $(TARGET_LIB)

re: fclean all
