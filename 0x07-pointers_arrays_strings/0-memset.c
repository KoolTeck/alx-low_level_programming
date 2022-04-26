#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: the pointer to the memory address
 * @n: the size of the memory to fill
 * @b: the contant byte to fill into memory
 *
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
