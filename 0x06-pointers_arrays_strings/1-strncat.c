#include "main.h"

/**
 * _strncat - concats two strings
 *
 *@dest: pointer to the fisrt str.
 *@src: pointer to the second str.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, len;

i = 0;
j = 0;
if (dest[i] != 0 && src[i] != 0)
{
while (dest[i] != 0)
{
len = i;
i++;
}
len++;
while (j < n && src[j] != '\0')
{
dest[len + j] = src[j];
j++;
}
}
dest[len + 1] = '\0';

return (dest);
}
