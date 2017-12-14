SRC_DIR=	$(realpath ..)

SRC=		$(SRC_DIR)/step-1.c
SRC_UT_DIR= 	$(realpath .)

SRC_UT= 	$(SRC_UT_DIR)/tests_step-1.c \

OBJ= 		$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS= 	-Wall -Wextra --coverage

LDFLAGS= 	-lcriterion -lgcov

NAME= 		units
all: 		$(NAME)

$(NAME): 	$(OBJ) \
		cc -o $(NAME) $(OBJ) $(LDFLAGS) \

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re: 		fclean all
