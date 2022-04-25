#include "main.h"

/**
 * leet - encodes a string
 *
 * @s: the pointer to the str.
 *
 * Return: a pointer to the encoded string.
 */
char *leet(char *s)
{
int i, j;

char lCode1[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T',  'L'};
char lCode2[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == lCode1[j])
{
s[i] = lCode2[j];
}
}
}

return (s);
}
