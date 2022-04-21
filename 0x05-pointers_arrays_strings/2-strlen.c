#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to chars to check
 *
 * Return: int always true.
 */

int _strlen(char *s)
{
int len;
int i = 0;
if (s[i] != 0)
{
while (i < s[i])
{
len = i;
i++;
}
return (len + 1);
}
else
{
len = 0;

return (len);
}
}
