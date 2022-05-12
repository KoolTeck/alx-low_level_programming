#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog data
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dogs's owner
 *
 * Return: a pointer to the new data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
{
return (NULL);
}
new_d->name = name;
new_d->age = age;
new_d->owner = owner;
return (new_d);
}
