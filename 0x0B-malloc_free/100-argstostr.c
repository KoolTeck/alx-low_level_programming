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
while (s[i] != '\0')
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
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
len += check_len(av[i]);
}
str = malloc(sizeof(char) * len);
if (str == NULL)
{
return (NULL);
}
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; j < check_len(av[i]); j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
return (str);
}
