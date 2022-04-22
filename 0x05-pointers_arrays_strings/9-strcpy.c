#include "main.h"

/**
 * _strcpy - copy a string from pointer to a buffer
 *
 * @dest: the buffer pointer to copy to.
 * @src: the source string pointer
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, j, len;
j = 0;
if (src[i] != 0)
{
while (src[i] != 0)
{
len = i;
i++;
}
len++;
while (j < len + 1)
{
dest[j] = src[j];
j++;
}
}
else
{
src[i] = src[i];
}
return (dest);
}
