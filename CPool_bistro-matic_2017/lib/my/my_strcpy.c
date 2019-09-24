/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** cpy string into another
*/
#include <stdio.h>

char		*my_strcpy(char *dest, char const *src)
{
	int	i = 0;

	if (dest == NULL || src == NULL)
		return (0);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
