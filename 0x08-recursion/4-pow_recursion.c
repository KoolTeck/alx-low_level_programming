#include "main.h"


/**
 * _pow_recursion - prints the power of a x to y.
 *
 * @x: the base number.
 * @y: the exponent.
 *
 * Return: the power of the int x
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
