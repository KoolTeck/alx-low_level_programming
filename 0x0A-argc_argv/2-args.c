#include "main.h"

/**
 * main - prints all args.
 *
 * @argc: the count of the program command
 * @argv: an arr of pointer to char
 *
 * Return: nothing.
 */
int main(int argc, char *argv[])
{
int i = 0;
(void)argc;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
