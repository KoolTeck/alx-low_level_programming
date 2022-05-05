#include "main.h"
#include <stdlib.h>

/**
 * main - prints the sum of two nums.
 *
 * @argc: the count of the program command
 * @argv: an arr of pointer to char
 *
 * Return: the sum on success, 1 or 0 on error
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) != 0)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else
{
printf("%d\n", sum);
}
return (0);
}
