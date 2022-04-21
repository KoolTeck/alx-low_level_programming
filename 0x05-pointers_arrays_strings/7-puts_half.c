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
int i, j, k, len, n;

i = 0;
j = 0;
k = 0;
if (str[i] != 0)
{
while (str[i] != 0)
{
len = i;
i++;
}
printf("%d\n", len);
len++;
if (len % 2 == 0)
{
n = (len / 2);
}
else
{
n = (len - 1) / 2;
}
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
