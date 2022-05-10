#include "main.h"
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block
 *
 * @ptr: the pointer to the prev mem. block
 * @old_size: the size in byte of the prev block
 * @new_size: the new byte to be added.
 *
 * Return: a pointer to the new mem block or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size > old_size)
{
new_ptr = malloc(old_size + new_size);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_ptr == NULL)
{
return (ptr);
}
free(ptr);
return (new_ptr);
}
