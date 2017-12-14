##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## thomas.foubert@epitech.eu
##

SRC	=	$(wildcard *.c)

OBJ	 =	$(SRC:.c=.o)

NAME	=	../libmy.a

INCLUDE	=	my.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(INCLUDE) ../../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../../include/$(INCLUDE)

re:	fclean all
