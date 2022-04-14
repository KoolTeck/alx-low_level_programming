#include "main.h"

/**
 * print_square - prints square
 *
 * @size: the limit to print to.
 *
 * Return: always void.
 */
void print_square(int size)
{
int lent = 0;
int br;
if (size > 0)
{
while (lent < size)
{
for (br = 0; br < size; br++)
{
_putchar('#');
}
_putchar('\n');
lent++;
}
}
else
{
_put('\n');
}
}
