#include "main.h"

/**
 * check - check if n is a perfect square.
 *
 * @n: the int to check
 * @odd: odd num to compare with;
 * @count: natural num to add up to even num.
7 *
 * Return: the sqrt of n if found, -1 if not found.
 */
int check(int n, int odd, int count)
{
int sum;
long  _sqrt;
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
count += 1;
sum = check(n - odd, (2L * count) -1, count);
if (sum < 0)
{
return (-1);
}
_sqrt = (check(n - odd, 2L * count - 1, count) + 1);
return (_sqrt);
}
/**
 * _sqrt_recursion - returns the sqrt of n.
 *
 * @n: the int to check
 *
 * Return: the sqrt of n if found, -1 if not found.
 */
int _sqrt_recursion(int n)
{
int c, odd;
c = 1;
odd = 1;
if (n == 1)
{
return (1);
}
return (check(n, odd, c));
}
