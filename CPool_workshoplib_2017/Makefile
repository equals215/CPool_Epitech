##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## thomas.foubert@epitech.eu
##

SRC	=	$(wildcard *.c)

OBJ	 =	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
