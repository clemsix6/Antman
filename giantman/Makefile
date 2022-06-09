##
## EPITECH PROJECT, 2022
## antman
## File description:
## Makefile
##

DEBUG = false

CC = gcc

ifeq ($(DEBUG),true)
	CC += -g3 -ggdb
endif

SRC = src/main.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -W -g3 -Wall -Wextra -Werror -I./include
LDFLAGS = -L../lib/my -lmy
TARGET = giantman

all: lib-make $(TARGET)
$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(CFLAGS) $(LDFLAGS)

lib-make:
	make -C ../lib/my

clean:
	rm -f $(OBJ)
	make -C ../lib/my clean

fclean: clean
	rm -f $(TARGET)

re: fclean all
