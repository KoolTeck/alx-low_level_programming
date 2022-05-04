#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to initial segment of haystack
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
return (0);
}
