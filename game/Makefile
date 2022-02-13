##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## JAM
##

SRC	=		src/main.c					\
			src/position_vec.c			\
			src/position_texture.c 		\
			src/shifting.c				\
			src/function_second_vec.c	\
			src/hyphen.c				\
			src/my_putchar.c			\
			src/sprite.c				\
			src/life.c					\
			src/game2.c					\
			src/convert.c				\

OBJ	=	*.o

INCLUDE	=	include/

NAME	=	jam_epitech

all:
	cc -g3 -c -I $(INCLUDE) $(SRC)
	cc -g3 -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -I./

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
