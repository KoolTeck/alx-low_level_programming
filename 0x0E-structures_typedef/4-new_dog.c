#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicates a string
 *
 * @str: the string to duplicate.
 *
 * Return: the ptr to the dup. or NULL
 */
char *_strdup(char *str)
{
int i, len;
char *s;
if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
s = (char*) malloc(len * sizeof(char) + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
s[i] = str[i];
}
s[i] = '\0';
return (s);
}
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
char *d_name, *d_owner;
new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
{
return (NULL);
}
d_name = _strdup(name);
if (d_name == NULL)
{
free(new_d);
return (NULL);
}
d_owner = _strdup(owner);
if (d_owner == NULL)
{
free(d_name);
free(new_d);
return (NULL);
}
new_d->name = d_name;
new_d->age = age;
new_d->owner = d_owner;
return (new_d);
}
