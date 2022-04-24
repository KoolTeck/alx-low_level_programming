#include "main.h"

/**
 * string_toupper - change lowercase to upper
 *
 * @s: the pointer to the string
 *
 * Return: a pointer to the s chars
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}

return (s);
}
