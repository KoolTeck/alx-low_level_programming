#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates new mem.
 *
 * @b: the size of mem to alloc.
 *
 * Return: a pointer to the new mem.
 */
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b * sizeof(int));
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
