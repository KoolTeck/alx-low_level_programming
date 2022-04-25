#include "main.h"

/**
 * cap_string - Capitalize words of string.
 *
 * @s: the pointer to the string;
 *
 * Return: A pointer to the cap str.
 */
char *cap_string(char *s)
{
int i, j, tmp;

int sep[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
}
}
for (j = 0; sep[j] != '\0'; j++)
{
if (s[i] == sep[j])
{
tmp = i;
tmp++;
if (s[tmp] >= 'a' && s[tmp] <= 'z')
{
s[tmp] = s[tmp] - 32;
}
}
}
}
return (s);
}
