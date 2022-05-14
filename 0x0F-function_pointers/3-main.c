#include <stdio.h>
#include "3-calc.h"
/**
 * main - check the code
 *
 * @argc: the args count
 * @av: the array vector
 *
 * Return: Always 0.
 */
int main(int argc, char *av[])
{
int res, num1, num2;
int (*f)(int a, int b);
if (argc < 4)
{
printf("Error\n");
exit(98);
}
f = get_op_func(av[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
if ((av[3][0] == 48) && (av[2][0] == '/' || av[2][0] == '%'))
{
printf("Error\n");
exit(100);
}
num1 = atoi(av[1]);
num2 = atoi(av[3]);
res = f(num1, num2);
printf("%d\n", res);
return (0);
}
