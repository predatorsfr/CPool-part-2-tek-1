##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/eval_expr.c	\
		src/lib_file.c	\
		lib/my/my_putstr.c \
		lib/my/my_strlen.c \
		lib/my/my_putchar.c \
		lib/my/my_put_nbr.c \
		lib/my/my_strdup.c \
		lib/my/my_strcpy.c \
		main.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -Wall -Wextra -Werror

NAME	=	calc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f lib/my/*~

re:		fclean all

.PHONY : 	all clean fclean re
