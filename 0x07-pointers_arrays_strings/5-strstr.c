#include "main.h"
#define NULL 0

/**
 * _strstr - locate a substring in a string
 *
 * @haystack: the string to check
 * @needle: the substr to check
 *
 * Return: a pointer to beginnin of needle.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, len, track;

len = 0;
while (needle[len] != '\0')
{
len++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; j < len && haystack[i] == needle[j]; j++, i++)
{
if (j == 0)
{
track = i;
}
if (j == len - 1)
{
return (haystack + track);
}
}
}
return (NULL);
}
