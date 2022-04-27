#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: the string to search.
 * @accept: the string byte to search
'*
 * Return:  a pointer to the byte in s that matches one of the bytes or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*(accept + j) ==  s[i])
{
return (s + i);
}
}
}
if (accept[i] == '\0')
{
return (s + i);
}
return (NULL);
}
