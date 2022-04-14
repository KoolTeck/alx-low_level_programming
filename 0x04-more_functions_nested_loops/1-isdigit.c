#include "main.h"

/**
 * _isdigit - checks if a char is digit
 * @c: The character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
for (int i = 48; i < 58; i++)
{
if (i == c)
{
return (1);
}
return (0);
}
}
