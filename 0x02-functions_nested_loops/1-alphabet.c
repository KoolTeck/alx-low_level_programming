#include "main.h"

/**
 * print_alphabet - prints lowercase alpha
 *
 * Return: Always  void.
 */
void print_alphabet(void)
{
char a;

a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
