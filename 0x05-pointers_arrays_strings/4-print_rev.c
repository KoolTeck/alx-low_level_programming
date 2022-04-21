#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: pointer to the chars
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
int i = 0;
int len;
int j = 0;
if (s[0] != 0)
{
while (s[i] != 0)
{
len = i;
i++;
}

while (len + 1  > j)
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}
else
{
write(1, "\n", 1);
}
}
