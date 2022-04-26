#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: the address to copy into.
 * @src: the address of memory to copy
 * @n: the size of the bytes to copy
 *
 * Return: address of the dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

i = 0;
if (src[i] == '\0')
{
return ('\0');
}
else
{
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
}
return (dest);
}
