#include "main.h"

/**
 * reverse_array - reverses and array
 *
 * @a: pointer to the arry to reverse
 * @n: the size of the array
 *
 * Return: Always void.
 */
void reverse_array(int *a, int n)
{
int i, tmp;
i = 0;
n--;
while (i < n)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
i++;
n--;
}
}
