#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: the name to print
 * @f: function pointer to callback
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f)
{
f(name);
}
}
