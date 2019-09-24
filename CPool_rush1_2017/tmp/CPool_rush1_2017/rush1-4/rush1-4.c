/*
** EPITECH PROJECT, 2017
** rush1
** File description:
** rush1
*/

#include <unistd.h>
int my_putchar(char c)
{
	write(2, &c, 1);
	return(0);
}

int	exept(int x, int y)
{
	if ( x <= 0 || y <= 0) {
		write(2, "Invalid size\n", 13);
	}
}

int	ligne(int y, int a, int r)
{
	while ( y >= 3) {
		my_putchar('\n');
		my_putchar('B');
		while ( a >= 3) {
			my_putchar(' ');
			a = a - 1;
		}
		a = r;
		my_putchar('B');
		y = y - 1;
	}
	my_putchar('\n');
}

int	boucle(int a, int z, int r, int x, int y)
{
	if ( x > 1 && y > 1) {
		my_putchar('A');
		while ( x >= 3) {
			my_putchar('B');
			x =x - 1;
		}
		my_putchar('C');
		{
			ligne(y,a,r);
		}
		my_putchar('A');
		while ( z >= 3) {
			my_putchar('B');
			z = z - 1;
		}
		my_putchar('C');
		my_putchar('\n');
	}	
}
void	rush(int x, int y)
{
	int	z = x;
	int	a = x;
	int	r = x;

	exept(x,y);
	if ( x == 1 ) {
		while ( y >= 1) {
		       	my_putchar('B');
			my_putchar('\n');
			y = y - 1;
		}
	}
	if ( y == 1) {
		while ( x >= 1) {
			my_putchar('B');
			x = x - 1;
		}
		my_putchar('\n');
	}
	boucle(a,z,r,x,y);
}

int main()
{
	rush(1, 1);
	return(0);
}
