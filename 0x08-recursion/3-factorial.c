#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: the number to check.
 *
 * Return: the factorial on succes, -1 on error.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
