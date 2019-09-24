##
## EPITECH PROJECT, 2017
## makefile
## File description:
## Hello
##

SRC     =	infin_add.c

OBJ     =	$(SRC: .c=.o)

NAME    =	infin_add

all:    $(NAME)

$(NAME):        $(OBJ)
	 gcc -o $(NAME) $(SRC) lib/my/libmy.a

clean:
	rm -f $(OBJ)
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
