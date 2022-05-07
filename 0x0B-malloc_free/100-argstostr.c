#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_len - checks the length of a string.
 *
 * @s: the string to check.
 *
 * Return: the length.
 */
int check_len(char *s)
{
int i = 0;
while (s[i] != 0)
{
i++;
}
return (i);
}

/**
 * argstostr - concatenates all the arguments of the program.
 *
 * @ac: the argument count.
 * @av: the arg. arr.
 *
 * Return: a pointer to the new str.
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *s, *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
s = av[i];
len += check_len(s) + 1;
}
str = malloc(len + 1 *sizeof(char));
if (str == NULL)
{
return (NULL);
}
k = 0;
for (i = 0; i < ac; i++)
{
s = av[i];
for (j = 0; j < check_len(s); j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
