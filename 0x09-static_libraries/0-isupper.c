#include "main.h"

/**
 * _isupper - check if a char is upper or lower cased.
 * @c: The character to check.
 *
 * Return: On upper 1, on lower returns 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
