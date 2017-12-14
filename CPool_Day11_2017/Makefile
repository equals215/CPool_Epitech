##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## thomas.foubert@epitech.eu
##

SRC	=	$(wildcard *.c)

OBJ	 =	$(SRC:.c=.o)

NAME	=	../liblink.a

INCLUDE	=	my_linked_list.h

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir ../../include/
	cp $(INCLUDE) ../../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../../include/$(INCLUDE)

re:	fclean all
