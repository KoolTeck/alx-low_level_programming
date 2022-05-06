#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
s = malloc(len + 1 * sizeof(char));
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
