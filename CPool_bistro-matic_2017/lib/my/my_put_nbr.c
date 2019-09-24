/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
**
*/

#include "../../include/my.h"

int	my_put_nbr(int nbr)
{
	if (nbr < 0) {
		nbr = -nbr;
		my_putchar('-');
	}
	if (nbr > 9)
		my_put_nbr(nbr / 10);
	my_putchar((nbr % 10) + 48);
	return(0);
}
