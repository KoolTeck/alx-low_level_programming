#include "main.h"

/**
 * _abs - checks the absolute value of a num.
 * @num: The num to check
 *
 * Return: On success the num.
 * On neg num, positive n is returned.
 */
int _abs(int num)
{
int abs;
if (num > 0)
{
abs = num;
}
else if (num < 0)
{
abs = (num * -1);
}
else
{
abs = 0;
}
return (abs);
}
