#include "main.h";

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
int a;
int i = 0;
while (i < 10)
{
a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
i++;
}
}
