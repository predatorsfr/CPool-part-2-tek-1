/*
** EPITECH PROJECT, 2017
** lib_file.c
** File description:
** all fonction need by eval_exper.c
*/
#include "../include/my.h"

int		my_atoi(char **str)
{
	int		nbr;

	nbr = 0;
	while (**str >= '0' && **str <= '9') {
		nbr = nbr * 10 + (**str - '0');
		(*str)++;
	}
	return (nbr);
}
