#include "main.h"

/**
 * print_alphabet - loop through char in ascii and prints alpas in lower case to stdout.
 *
 * Return: Always  void.
 */
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
