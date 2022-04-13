#include "main.h"
/**
 * _isalpha - check if a char is alpa.
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
}
