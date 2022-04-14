#include "main.h"

/**
 * _isdigit - checks if a char is digit
 * @c: The character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
