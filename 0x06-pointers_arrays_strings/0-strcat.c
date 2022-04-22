#include "main.h"

/**
 * _strcat - concats two strings
 *
 * @dest: pointer to the ist str.
 * @src: the src string to concat
 *
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
int i, j, len1;

i = 0;
j = 0;
if (dest[i] != 0 && src[i] != 0)
{
while (dest[i] != 0)
{
len1 = i;
i++;
}
len1++;
while (src[j] != 0)
{
dest[len1] = src[j];
len1++;
j++;
}
}
return (dest);
}
