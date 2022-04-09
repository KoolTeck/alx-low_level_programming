#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Successful)
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a == 'e' || a == 'q')
{
a++;
continue;
}
putchar(a);
a++;
}
putchar('\n');

return (0);
}
