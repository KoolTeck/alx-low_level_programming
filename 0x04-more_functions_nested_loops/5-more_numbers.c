#include "main.h"

/**
 * more_numbers - prints 0 - 14 10x
 *
 * Return: always void.
 */
void more_numbers(void)
{
int row, col, limit, repeat;
row = 0;
col = '0';
limit = '9';
repeat = 0;
while (row <= 10)
{
while (repeat < 2)
{
for (; col <= limit; col++)
{
if (limit == '4')
_putchar('1');
_putchar(col);
}
repeat++;
limit = '4';
col = '0';
}
_putchar('\n');
row++;
limit = '9';
repeat = 0;
col = '0';
}
}
