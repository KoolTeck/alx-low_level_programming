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
int len1, len2, result;

len1 = 0;
len2 = 0;
if (s1[len1] != 0 && s2[len2] != 0)
{
while (s1[len1] != 0)
{
len1++;
}
len1++;
while (s2[len2] != 0)
{
len2++;
}
len2++;
if (len1 < len2)
{
result = -15;
}
else if (len1 > len2)
{
result = 15;
}
else
{
result = 0;
}
}
return (result);
}
