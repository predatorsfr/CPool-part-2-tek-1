

SRC	=	eval_expr.c	\
		lib_file.c	\
		main.c

OBJ	=	$(SRC: .c=.o)

NAME	=	eval_expr

all: $(NAME)


$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)


re:	fclean all

.PHONY : clean
