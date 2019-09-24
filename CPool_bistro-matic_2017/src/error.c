/*
** EPITECH PROJECT, 2017
** error
** File description:
** error gestion
*/
#include "../include/my.h"

int		to_many_operand(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (0);
}

int		no_operand(char *str)
{
	int	i = 0;
	int	y = 0;
	char	*fact = "+-*/%";
	
	while (str[i] != '\0') {
		while (fact[y] != '\0') {
			if (str[i] == fact[y])
				return (0);
			y++;
		}
		i++;
		y = 0;
	}
	return (1);
}

int		error(char *str)
{
	if (no_operand(str) == 1)
		return (1);
	return (0);
}
