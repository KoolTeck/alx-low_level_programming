#include "main.h"

/**
 * puts2 - prints other char of a str.
 *
 * @str: pointer to the str
 *
 * Return: nothing.
 */
void puts2(char *str)
{
int i = 0;
if (str[i] != 0)
{
while (str[i] != 0)
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
