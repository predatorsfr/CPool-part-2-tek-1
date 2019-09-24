/*
** EPITECH PROJECT, 2017
** rev
** File description:
** 
*/

char *my_revstr( char *str)
{
        char  c;
        char  *orig;
        int   i;
        int   len;

        i = 0;
        orig = str;
        while (*str)
        {
                str++;
        }
        len = str - orig - 1;
        while (i < len / 2)
        {
                c = orig[i];
                orig[i] = orig[len - i];
                orig[len - i] = c;
                i++;
        }
        return (orig);
}
