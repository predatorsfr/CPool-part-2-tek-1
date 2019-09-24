/*
** EPITECH PROJECT, 2017
** match
** File description:
** match
*/

#include<stdio.h>

int	match (char *s1, char *s2)
{
	int i = 1;
	int j = 0;
	
	if (*s1 == '\0' && *s2 == '\0')
		return (i);
	else if (*s1 == '\0' || *s2 == '\0')
		return (j);
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
	else
		return (j);
}
