#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 skipping 2 and 5
 *
 * Return: always void.
 */
void print_most_numbers(void)
{
int c;

for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
_putchar(c);
}
_putchar('\n');
}
