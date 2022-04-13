#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @num: The int number to check
 *
 * Return: the last digit always.
 */
int print_last_digit(int num)
{
int lastdg;
if (num < 0)
{
num *= -1;
}
lastdg = num % 10;
_putchar(lastdg + '0');
return (lastdg);
}
