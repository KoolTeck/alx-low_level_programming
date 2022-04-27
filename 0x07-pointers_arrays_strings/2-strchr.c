#include "main.h"

/**
 * _strchr - check if a char exists in a string.
 *
 * @s: the string to check.
 * @c: the char to check.
 *
 * Return:  a pointer to the ist occurence of c in s.
 */
char *_strchr(char *s, char c)
{
int i;
char *found;

i = 0;
for (; *(s + i) != '\0'; i++)
{
if (s[i] == c)
{
found = s + i;
return (found);
}
}
if (c == '\0')
{
return (s + i);
}
return (NULL);
}
