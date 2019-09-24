##
## EPITECH PROJECT, 2017
## 
## File description:
## 
##

SRC	=	my_revstr.c \
		my_strlen.c \
		my_putchar.c

NAME	=	libmy.a

OBJ	= $(SRC:.c=.o)

all: $(NAME)

lib:	$(NAME)

$(NAME):	$(OBJ)
	ar r $(NAME) $(OBJ)
	cp libmy.a ../
clean:
	rm -f $(OBJ)
 

fclean: clean
	rm -f *~

re:	fclean all

.PHONY: all clean fclean re

