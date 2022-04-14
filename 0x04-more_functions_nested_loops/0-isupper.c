#include "main.h"

/**
 * _isupper - check if a char is upper or lower cased.
 * @c: The character to check.
 *
 * Return: On upper 1, on lower returns 0.
 */
int _isupper(int c)
{
for (int i = 65; i < 91; i++)
{
if (c == i)
{
return (1);
}
return (0);
}
}
