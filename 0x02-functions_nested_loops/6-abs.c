#include "main.h"

/**
 * _abs - checks the the absolute value of a num.
 * @n The character to check
 *
 * Return: On success the num.
 * On neg num, positive n is returned.
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return ((n) * (-1));
}
else
{
return (0);
}
}
