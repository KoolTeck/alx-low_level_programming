#include "main.h"
#include <stdlib.h>

/**
 * get_len - checks the len of a str.
 *
 * @s: the str to check.
 *
 * Return: the length of the str.
 */
int get_len(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * string_nconcat - concats two str.
 *
 * @s1: the ist str.
 * @s2: the 2nd str.
 * @n: the num of bytes to concat to s1.
 *
 * Return: a pointer to the new str.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, len1, len2, size;
char *str;

len1 = get_len(s1);
len2 = get_len(s2);
if (n >= len2)
{
size = len1 + len2;
}
else
{
size = len1 + n;
}
str = malloc(size *sizeof(int));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
str[i] = s1[i];
}
for (i = 0; i < n && s2[i] != '\0'; i++)
{
str[len1] = s2[i];
len1++;
}
str[size] = '\0';
return (str);
}
