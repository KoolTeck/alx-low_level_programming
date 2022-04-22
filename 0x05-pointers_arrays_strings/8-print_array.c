#include "main.h"

/**
 * print_array - prints an array of n elements.
 *
 * @a: the pointer to the array
 * @n: the size of the array to print.
 *
 * Return: Always empty.
 */
void print_array(int *a, int n)
{
int i = 0, tmp;
tmp = *&a[n - 1];
if (n != i)
{
while (i < n)
{
printf("%d", *&a[i]);
if (*&a[i] != tmp)
{
printf(", ");
}
i++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
