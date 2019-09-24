##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##



SRC	=	rush2.c

OBJ	=	$(SRC: .c=.o)

NAME	=	rush2

all: $(NAME)


$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)


re:	fclean all

.PHONY : clean
