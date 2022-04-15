#include "main.h"

/**
 * more_numbers - prints 0 - 14 10x
 *
 * Return: always void.
 */
void more_numbers(void)
{
int row = 0;
int col;
int limit = '9';
int repeat;
while (row <= 10)
{
repeat = 0;
while (repeat < 2)
{
for (col = '0'; col <= limit; col++)
{
if (limit == '4')
_putchar('1');
_putchar(col);
}
repeat++;
limit = '4';
}
_putchar('\n');
row++;
limit = '9';
}
}
