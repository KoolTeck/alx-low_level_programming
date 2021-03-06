#include "main.h"

/**
 * _strncpy - copy a string from src to dest
 *
 * @dest: the destination buffer
 * @src: the source str.
 * @n: the number of byte to copy
 *
 * Return: a pointer to the dest str.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
