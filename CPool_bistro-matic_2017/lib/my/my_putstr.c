/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** florian.chauveau@epitech.eu
*/
#include <unistd.h>
#include "../../include/my.h"

int	my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
	return (0);
}
