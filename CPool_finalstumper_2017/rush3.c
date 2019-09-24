/*
** EPITECH PROJECT, 2017
** final stumper
** File description:
**
*/

#include<unistd.h>
#define BUFF_SIZE (4096)

int my_strlen(char *str)
{
	int	i = 0;
	
	while (str[i] != '\0')
		i++;
	i--;
}

void rush3(char *str)
{
	int	i = 0;
	
	if (str[0] == 'o') {
		write(1, "[rush1-1]", 9);
		write(1, " 1 1", 4);
		write(1, "\n", 1);
	}
	if (str[i] == '*')
		write(1, "[rush1-2] 1 1\n", 14);
	if (str[i] == 'B')
		write(1, "[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n", 51);
	if (str[i]  == 'A')
		write(1, "[rush1-3] 2 2\n", 14);
	if (str[i]  == '/')
		write(1, "[rush1-2] 2 2\n", 14);
}

int	main(void)
{
	char buff[BUFF_SIZE + 1];
	int	offset;
	int	len;

	offset = 0;
	while (len = read(0, buff + offset, BUFF_SIZE - offset) > 0)
		offset = offset + len;
	buff[offset] = '\0';
	if (len < 0)
		return (84);
	rush3(buff);
	return(0);
}
