#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog's struct
 *
 * @d: pointer to the struct.
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
free(d->name);
free(d->owner);
}
if (d->owner != NULL)
{
free(d->owner);
}
}
