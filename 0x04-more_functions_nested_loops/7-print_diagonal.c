#include "main.h"

/**
 * print_diagonal - draw diagonal line
 *
 * @n: the limit to print to.
 *
 * Return: always void.
 */
void print_diagonal(int n)
{
int line = 0;
int space;

if (n > 0)
{
while (line < n)
{
for (space = 0; space < line; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
line++;
}
}
else
{
_putchar('\n');
}
}
