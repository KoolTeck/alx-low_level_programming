#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *concat - concats two strs.
 *
 * @s1: the ist str.
 * @s2: the second str.
 * @size1: the size of str1.
 * @size2: the size of str2.
 *
 * Return: a pointer to the str or null on error.
 */
char *concat(int size1, int size2, char *s1, char *s2)
{
int i, j;
char *s;
i = 0, j = 0;
s = malloc(size1 + size2 + 1 * sizeof(char));
if (s == NULL)
{
return (NULL);
}
while (i < size1)
{
s[i] = s1[i];
i++;
}
while (j < size2)
{
s[size1] = s2[j];
size1++;
j++;
}
s[size1] = '\0';
return (s);
}
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
int len1, len2;
char *s;

if (s1 == NULL && s2 == NULL)
{
return ("\0");
}
if (s1 == NULL)
{
return (s2);
}
else if (s2 == NULL)
{
return (s1);
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
s = concat(len1, len2, s1, s2);
return (s);
}
