#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the int to check
 * @index: the inset to set
 *
 * Return: 1 if success, 0 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i, shift, temp;

temp = *n;
shift = 1;
i = 0;
while (temp > 0)
{
i++;
temp <<= 1;
}
if (*n == 0)
{
*n = *n & (shift << index);
return (1);
}
if (index > i)
{
*n = *n;
return (-1);
}
shift <<= index;
shift = ~shift;
*n = *n & shift;
return (1);
}
