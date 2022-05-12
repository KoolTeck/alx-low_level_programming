#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the dog data
 *
 * @d: pointer to the dog struct
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("owner: (nil)\n");
}
else
{
printf("Name: %s\n", d->owner);
}
}
printf("\n");
}