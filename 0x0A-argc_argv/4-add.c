#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_int - checks if a char in a str is int or not.
 *
 * @s: the str to check.
 *
 * Return: 1 on success, 0 on error.
 */
int check_int(char *s)
{
int i = 0;
while (s[i] != 0)
{
if (s[i] >= '0' && s[i] <= '9')
{
i++;
}
else
{
return (0);
}
}
return (1);
}

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
int sum = 0, i = 1, isnum;
if (argc > 2)
{
while (i < argc)
{
isnum = check_int(argv[i]);
if (isnum == 0)
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
i++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
