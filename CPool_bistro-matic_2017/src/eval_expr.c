/*
** EPITECH PROJECT, 2017
** eval_expr.c
** File description:
** execute mathematique expretion
*/
#include "../include/my.h"

int		parse_nbr(char **expr)
{
	int nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(') {
		(*expr)++;
		nbr = sum_parse(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (my_atoi(expr));
}

int		parse_fact(char **expr)
{
	int		nbr;
	int		nbr2;
	char		op;

	nbr = parse_nbr(expr);
	while (**expr) {
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		(*expr)++;
		nbr2 = parse_nbr(expr);
		if (op == '/' && nbr2 == 0) {
			my_putstr("error; can't divide by zero");
			return (0);
		}
		else if (op == '/' && nbr2 != 0)
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int		sum_parse(char **expr)
{
	int	nbr;
	int	nbr2;
	char	op;

	nbr = parse_fact(expr);
	while (**expr) {
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (nbr);
		(*expr)++;
		nbr2 = parse_fact(expr);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int		eval_expr(char *expr)
{
	return (sum_parse(&expr));
}
