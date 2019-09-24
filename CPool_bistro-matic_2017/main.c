/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main for eval_expr
*/

#include "include/my.h"
#include <unistd.h>


char		*standard_output()
{
	int	size = 1;
	char    buffer[16834];

	while (size != 0 && size != -1) {
		if ((size = read(0, buffer, 16384)) == -1) {
			buffer[0] = '\n';
			my_putstr("cat: ");
			my_putstr(buffer);
			my_putstr("error\n");
		} else {
			buffer[size] =  '\0';
			return (my_strdup(buffer));
		}
	}
	return("error");
}

void		print_help()
{
	my_putstr("USAGE\n\t   ./calc base operators size_read\n");
	my_putstr("\nDESCRIPTION\n\t   base\t      all the ");
	my_putstr("symbols of the base");
	my_putstr("\n\t   operators  the symbols for the ");
	my_putstr("parentheses and the 5 operators");
	my_putstr("\n\t   size_read  number of characters to read\n");
}

int		main(int ac, char **av)
{
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			print_help();
			return (0);
		}
	}
	if (ac == 4 && my_strlen(av[2]) == 7) {
		my_put_nbr(eval_expr(standard_output()));
		return(0);
	}
	my_putstr("syntax error");
	return(84);
}
