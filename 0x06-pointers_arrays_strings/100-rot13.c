
#include "main.h"

/**
 * *rot13 - encodes a string with rot13
 *
 * @s: a pointer to the str
 *
 * Return: A pointer to the modofied str
 */
char *rot13(char *s)
{
char i, j;

char rot1[26] = "ABCDEFGHIJKLMabcdefghijkm";
char rot2[26] = "NOPQRSTUVWXYZnopqrstuvwxyz";

for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (j < 26)
{
if (s[i] == rot1[j])
{
s[i] = rot2[j];
}
else if (s[i] == rot2[j])
{
s[i] = rot1[j];
}
j++;
}
}
return (s);
}
