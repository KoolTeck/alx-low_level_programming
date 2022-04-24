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
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] > s2[i])
{
result = 15;
break;
}
if (s1[i] < s2[i])
{
result = -15;
break;
}
if (s1[i] == s2[i])
{
result = 0;
break;
}
printf("%c %c\n", s1[i], s2[i]);
i++;
}
return (result);
}
