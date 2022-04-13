#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 *
 * Return: On success 1 on n geater than 0.
 * On n lesser than 0, -1 is returned
 * On n equal to 0, 0 is returned
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
