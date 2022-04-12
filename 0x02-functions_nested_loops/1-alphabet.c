#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 * print_alphabet - loop through char in ascii.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char a;

a = 'a';
while (a < 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
