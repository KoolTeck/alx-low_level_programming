#include "main.h"

/**
 * _atoi - converts a string to int.
 *
 * @s: the string to convert
 *
 * Return: the int value or 0.
 */
int _atoi(char *s)
{
int i, num, sign, len;

sign = 1;
len = 0;
i = 0;
num = 0;
while (s[len] != '\0')
{
len++;
}
while (i < len)
{
if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + s[i] - '0';
}
if (!(s[i] >= '0') && !(s[i] <= '9'))
{
num = 0;
}
if (s[i] == '-' || s[i] == '+')
{
sign = 1 - 2 * (s[i] == '-');
}
i++;
}
return (num *sign);
}
