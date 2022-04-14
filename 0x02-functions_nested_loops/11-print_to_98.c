#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the natural num from n to 98
 * @n: The natural num
 *
 * Return: void always success
 */
void print_to_98(int n)
{
while (n <= 97)
{
printf("%d", n);
if (n != 98)
printf(", ");
n++;
}
while (n > 97)
{
printf("%d", n);
if (n != 98)
printf(", ");
n--;
}
}
