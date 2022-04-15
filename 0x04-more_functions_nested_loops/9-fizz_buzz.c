#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always void
 */
int main(void)
{
int limit = 100;
int count;

for (count = 1; count <= limit; count++)
{
if (count % 15 == 0)
{
printf("FizzBuzz ");
continue;
}
else if (count % 5 == 0)
{
if (count == 100)
{
printf("Buzz");
}
else
{
printf("Buzz ");
}
continue;
}
else if (count % 3 == 0)
{
printf("Fizz ");
continue;
}
printf("%d ", count);
}
printf("\n");

return (0);
}
