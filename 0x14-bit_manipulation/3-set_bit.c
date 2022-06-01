#include "main.h"

/**
 * set_bit -  sets the value of a bit at a given index to 1.
 * @n: The num to convert
 * @index: the index to look for
 *
 * Return: 1 On success value.
 * On error, -1 is returned.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num, temp, shift;
unsigned int i;

num = *n;
temp = *n;
shift = 1;
if (*n == 0)
{
*n = temp | shift << index;
return (1);
}
for (i = 0; num > 0; i++)
{
num <<= 1;
}
if (index > (i - 1))
{
*n = temp;
return (-1);
}
*n = temp | shift << index;
return (1);
}
