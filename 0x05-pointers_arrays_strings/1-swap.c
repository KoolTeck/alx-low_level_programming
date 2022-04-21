#include "main.h"

/**
 * swap_int - swaps the value of two ints.
 *
 * @a: pointer to the ist int.
 *
 * @b: pointer to the second int.
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
