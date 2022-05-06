#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concats two strs.
 *
 * @s1: the ist str.
 * @s2: the second str.
 *
 * Return: a pointer to the str or null on error.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, len1, len2;
char *s;
if (s1 == NULL || s2 == NULL)
{
return ('\0');
}
len1 = 0;
len2 = 0;
while (s1[len1] != 0)
{
len1++;
}
while (s2[len2] != 0)
{
len2++;
}
s = malloc(len1 + len2 + 1 * sizeof(char));
i = 0;
while (i < len1)
{
s[i] = s1[i];
i++;
}
j = 0;
while (j < len2)
{
s[len1] = s2[j];
len1++;
j++;
}
s[len1] = '\0';
return (s);
}
