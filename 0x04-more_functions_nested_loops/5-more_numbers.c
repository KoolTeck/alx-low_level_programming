#include "main.h"

/**
 * more_numbers - prints 0 - 14 10x
 *
 * Return: always void.
 */
void more_numbers(void)
{
int row, col, repeat, limit;

row = 0;
col = '0';
limit = '9';
 
while (row < 10)
{
repeat = 0;
while (repeat < 2)
{
while (col <= limit)
{
if (limit == '4')
_putchar('1');
_putchar(col);
col++;
}
repeat++;
limit = '4';
col = '0';
}
_putchar('\n');
row++;
limit = '9';
col = '0';
}
}
