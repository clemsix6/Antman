##
## EPITECH PROJECT, 2022
## antman
## File description:
## Makefile
##

all:
	make -C antman
	make -C giantman

clean:
	make -C antman clean
	make -C giantman clean

fclean:
	make -C antman fclean
	make -C giantman fclean

re:
	make -C antman re
	make -C giantman re
