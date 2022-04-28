#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of arr.
 *
 * @a: the array to check
 * @size: the size of the square arr.
 *
 * Return: Always void.
 */
void print_diagsums(int *a, int size)
{
int i, len, diag1, diag2, interval;

diag1 = 0;
diag2 = 0;
interval = size - 1;
len = size * size;
for (i = 0; i < len; i++)
{
diag1 += a[i];
i += size;
}
for (i = 0; i < len; i++, size++)
{
size--;
diag2 += a[size];
if (i == interval)
{
break;
}
size += interval;
}
printf("%d", diag1);
printf(", ");
printf("%d", diag2);
printf("\n");
}
