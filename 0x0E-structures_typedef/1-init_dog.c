#include "dog.h"
/**
 * init_dog - initializes the var of type struct dog
 *
 * @d: the address of the struct to initialize
 * @name: the name of the dog
 * @age: the dogs age
 * @owner: the dogs owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).nage = age;
(*d).nowner = owner;
}
