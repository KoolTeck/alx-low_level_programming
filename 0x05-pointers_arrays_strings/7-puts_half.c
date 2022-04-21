#include "main.h"

/**
 * puts_half - prints the half of a str.
 *
 * @str: pointer to the str.
 *
 * Return: Always void
 */
void puts_half(char *str)
{
int i, len, n;

i = 0;
if (str[i] != 0)
{
while (str[i] != 0)
{
len = i;
i++;
}
len++;
n = (len + 1) / 2;
while (str[n] != 0)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
