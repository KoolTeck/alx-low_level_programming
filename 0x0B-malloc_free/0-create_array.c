#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arr of chars and initilize it.
 *
 * @size: the size of the arr.
 * @c: the char to fill the arr.
 *
 * Return: a pointer to the arr mem. or NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;

if (size <= 0)
{
return (NULL);
}
a = malloc(size * sizeof(char));
if (a == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
a[i] = c;
i++;
}
a[size] = '\0';
return (a);
}
