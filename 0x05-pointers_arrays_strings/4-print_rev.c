#inlude "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: pointer to the chars
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
int i = 0;
int len;
if (s[0] != 0)
{
while (s[i] != 0)
{
lens = i;
i++;
}
for (int  j = 0; len + 1 > j; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
else
{
write(1, "\n", 1);
}
}
