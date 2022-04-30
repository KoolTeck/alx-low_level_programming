#include "main.h"

/**
 * check_int - checks if n is prime or not.
 *
 * @n: the int to check
 * @count: natural num to divide through.
 * @temp: saves the initial value of n for persisitency.
 *
 * Return: 1 if prime 0 otherwise.
 */
int check_int(int n, int count, int temp)
{
if (temp == count)
{
return (1);
}
if (n == 0)
{
return (0);
}
count += 1;
return (check_int(temp % count, count, temp));
}

/**
 * is_prime_number - checks if n is prime or not.
 *
 * @n: the int to check
 *
 * Return: 1 if prime 0 otherwise.
 */
int is_prime_number(int n)
{
int count, temp;
count = 1;
temp = n;
if (n == 1 || n < 0)
{
return (0);
}
return (check_int(n, count, temp));
}
