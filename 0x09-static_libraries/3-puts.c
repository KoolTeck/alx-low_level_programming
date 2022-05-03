#include "main.h"

/**
 * _puts - prints a string to stdout.
 *
 * @str: pointer to the string to print.
 *
 * Return: nothing.
 */
void _puts(char *str)
{
int i = 0;
int len;
if (str[0] != 0)
{
while (str[i] != 0)
{
len = i;
i++;
}
write(1, str, len + 1);
write(1, "\n", 1);
}
else
{
write(1, "\n", 1);
}
}
