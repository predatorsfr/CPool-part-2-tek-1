/*
** EPITECH PROJECT, 2017
** tree.c
** File description:
** tree
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char a)
{
	write(1, &a, 1);
}

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
}
void	tree1()
{
	my_putstr("   *\n  ***\n *****\n*******\n   ");
}

void	tree2()
{
	my_putstr("      *\n     ***\n    *****\n   *******\n    *****\n   *******\n  *********\n ***********\n*************\n     |||\n     |||\n ");
}

void	trunk(int longueur, int largueur)
{
	int a = largueur;
	
	if (largueur %2 == 1) {
		largueur = largueur + 1;
		while (a != 0){
			longueur = largueur - 1;
			while( longueur != 0) {
				my_putchar('|');
				longueur--;
			}
			my_putchar('\n');
			a--;
		}
	} else {
		while (a != 0){
			longueur = largueur + 1;
			while( longueur != 0) {
				my_putchar('|');
				longueur--;
			}
			my_putchar('\n');
			a--;
		}		
	}		
}

void tree(int size)
{
	int	largueur;
	int	longueur;
	largueur = size;
	longueur = size;
	
	if (size <= 0)
		return;
	if (size == 1) {
		tree1();
		trunk(largueur, longueur);
	}

	if (size == 2)
		tree2();
	if (size > 2)
		trunk(largueur, longueur);
}

int main (int ac, char **av)
{
	if (ac == 2)
		tree(atoi(av[1]));
}
