#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates mem for an arr.
 *
 * @nmemb: the size of the ar.
 * @size: the size of element type.
 *
 * Return: a pointer to the mem.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *ptr;
char *arr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
arr = ptr;
for (i = 0; i < nmemb * size; i++)
{
arr[i] = 0;
}
return (arr);
}
