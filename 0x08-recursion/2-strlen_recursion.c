#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a str.
 *
 * @s: the string to check.
 *
 * Return: the length int.
 */
int _strlen_recursion(char *s)
{
int n;
if (*(s) == 0)
{
return (0);
}
if (*(s) != 0)
{
n = _strlen_recursion(s + 1) + 1;
}
return (n);
}
