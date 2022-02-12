##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## amine ch
##

SRC     =	src/main.c		\

OBJ     =	*.o

INCLUDE =	include/

NAME    =	jam

all:
	gcc -c -I $(INCLUDE) $(SRC)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(OBJ)
	rm -f *~
	rm -f *#
	rm -f src/*~
	rm -f src/*#

re: fclean all

.PHONY: re clean fclean all
