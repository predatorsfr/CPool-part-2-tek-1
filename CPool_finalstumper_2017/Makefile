

SRC	=	rush3.c	\

OBJ	=	$(SRC: .c=.o)

NAME	=	rush3

all: $(NAME)


$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f *~


re:	fclean all

.PHONY : clean
