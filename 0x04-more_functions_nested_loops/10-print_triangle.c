#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: the size of triangle to print
 * Return: always void.
 */
void print_triangle(int size)
{
int row = 0;
int hash;
int spc;
if (size > 0)
{
for (; row < size; row++)
{
for (spc = size - 1; spc > row; spc--)
{
_putchar(' ');
}
for (hash = 0; hash < row + 1; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
