#include "main.h"
#include <stdlib.h>

/**
 * concat - performs the concat.
 *
 * @l1: the length of the ist str
 * @b_size: the n byte to concat.
 * @len: the size of the memory
 * @s1: the ist str.
 * @s2: the 2nd str.
 * @buffer: the destination mem.
 *
 * Return: a pointer to the new str.
 */
char *concat(int l1, int b_size, int len, char *s1, char *s2, char *buffer)
{
unsigned int i, len1, n, size;
len1 = l1;
n = b_size;
size = len;
for (i = 0; i < len1; i++)
{
buffer[i] = s1[i];
}
for (i = 0; i < n && s2[i] != '\0'; i++)
{
buffer[len1] = s2[i];
len1++;
}
buffer[size] = '\0';
return (buffer);
}

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
unsigned int len1, len2, size;
char *str;

if (n <= 0)
{
s1 = "";
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = get_len(s1);
len2 = get_len(s2);
if (n >= len2)
{
size = len1 + len2 + 1;
}
else
{
size = len1 + n + 1;
}
str = malloc(size *sizeof(int));
if (str == NULL)
{
return (NULL);
}
str = concat(len1, n, size, s1, s2, str);
return (str);
}
