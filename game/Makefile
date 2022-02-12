##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	window.cpp		\

OBJ	=	*.o

NAME	=	jam

all:$(NAME)

$(NAME):	$(OBJ)
	g++	-o $(NAME) $(OBJ) -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f $(OBJ)

fclean:	clean

re:	fclean all