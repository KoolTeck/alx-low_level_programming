#include "main.h"

/**
 * _strspn - gets the lenght of a substring.
 *
 * @s: the string to check
 * @accept: source str.
 *
 * Return: number of bytes in the initial segment of s;
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int n = 0;
unsigned int prev = 0;


for (i = 0; s[i] != '\0'; i++)
{
prev = n;
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(accept + j) == s[i])
{
n++;
}
}
if (n == prev)
{
break;
}
}
return (n);
}
