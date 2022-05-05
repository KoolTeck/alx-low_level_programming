#include "main.h"
#include <stdlib.h>

/**
 * main - prints the product of two nums.
 *
 * @argc: the count of the program command
 * @argv: an arr of pointer to char
 *
 * Return: 1 on success.
 */
int main(int argc, char *argv[])
{
int mult = 1, i;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
mult *= atoi(argv[i]);
}
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
