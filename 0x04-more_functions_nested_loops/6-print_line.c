#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: the number of times to print.
 *
 * Return: always void.
 */
void print_line(int n)
{
int c;

for (c = 0; c < n; c++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}
