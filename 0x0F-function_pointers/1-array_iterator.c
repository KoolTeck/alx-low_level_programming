#include "function_pointers.h"

/**
 * array_iterator - executes a funct param
 * @array: the arr to use its elem.
 * @size: the size of the array
 * @action: the funct. to execute
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i = 0;
if (array && action)
{
while (i < size)
{
action(array[i++]);
}
}
}
