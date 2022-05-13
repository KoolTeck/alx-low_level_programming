#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int. and return the index
 * @array: the arr to check
 * @size: the size of the arr
 * @cmp: the compare function
 *
 * Return: 0 if false, the ele index if true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) > 0)
{
return (i);
}
}
}
return (-1);
}
