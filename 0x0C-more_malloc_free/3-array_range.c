#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: the min array byte.
 * @max: the max array byte.
 *
 * Return: a pointer to the new array.
 */
int *array_range(int min, int max)
{
int i, num, size;
int *arr;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (num = min, i = 0; num <= max && i < size; i++, num++)
{
arr[i] = min;
}
return (arr);
}
