/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** dup a string
*/
#include <stdlib.h>

int		my_strlen(char const *str);
char		*my_strcpy(char *dest, char const *src);
void		my_putstr(char *str);

char		*my_strdup(char const *src)
{
	char	*tmp;

	if ((tmp = malloc(sizeof(char *) * (my_strlen(src) + 1))) == NULL) {
	}
	if (tmp == NULL)
		return (NULL);
	my_strcpy(tmp, src);
	return(tmp);
}
