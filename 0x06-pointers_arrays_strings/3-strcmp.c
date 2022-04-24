#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: the first str,
 * @s2: the second str.
 *
 * Return: an int based on comparism.
 */
int _strcmp(char *s1, char *s2)
{
int i, result;
i = 0;
if (s1[i] != 0 && s2[i != 0])
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
}
return (*s1 - *s2);
}
