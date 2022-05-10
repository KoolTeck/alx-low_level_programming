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
int i, size;
int *arr;
if (min > max)
{
return (NULL);
}
size = max - min;
arr = malloc(size *sizeof(int *));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i <= size; i++)
{
arr[i] = min;
min++;
}
return (arr);
}
