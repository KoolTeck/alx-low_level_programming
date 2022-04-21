#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: pointer to the char array.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
int len;
int i, j, k, tmp;

i = 0;
k = 0;
if (s[i] != 0)
{
while (s[k] != 0)
{
len = k;
k++;
}
j = len;
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++;
j--;
}
}
else
{
s[i] = s[i];
}
}
