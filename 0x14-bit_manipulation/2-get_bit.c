#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: pointer to the char array.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
int len;
int i, j, k, tmp;

i = 0;
k = 0;
if (s[i] != 0)
{
while (s[k] != 0)
{
len = k;
k++;
}
j = len;
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++;
j--;
}
}
else
{
s[i] = s[i];
}
}

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: The num to convert
 * @index: the index to look for
 *
 * Return: On success the index value.
 * On error, -1 is returned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int num, i, size = 0;
int bit, rem, sub;
char *buf;

num = n;
while (n > 0)
{
size++;
n /= 2;
}
buf = malloc(size *sizeof(int));
if (buf == NULL)
{
return (-1);
}
for (i = 0; num > 0; i++)
{
rem = num % 2;
buf[i] = rem + '0';
num /= 2;
}
if (index > (i - 1))
{
return (-1);
}
sub = (i - 1) - index;
rev_string(buf);
bit = buf[sub] - '0';
free(buf);
return (bit);
}
