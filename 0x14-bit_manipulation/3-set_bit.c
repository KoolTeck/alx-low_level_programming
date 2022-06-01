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
 * str_len - returns the lenght of a string
 *
 * @b: the str to check
 *
 * Return: the lenght
 */
unsigned int str_len(const char *b)
{
unsigned int i = 0;

while (b[i] != '\0')
{
i++;
}
return (i);
}
/**
 * binary_to_uint - converts binary to u_int
 *
 * @b: the str to check
 *
 * Return: the converted number, 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_num = 0;
int i, mul;

if (b == NULL)
{
return (0);
}
for (i = str_len(b) - 1, mul = 0; i >= 0; --i, mul++)
{
if (b[i] == '1' || b[i] == '0')
{
dec_num += (b[i] - 48) * (1 << mul);
}
else
{
return (0);
}
}

return (dec_num);
}

/**
 * set_bit -  sets the value of a bit at a given index to 1.
 * @n: The num to convert
 * @index: the index to look for
 *
 * Return: 1 On success value.
 * On error, -1 is returned.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num, bin_num, prev, size = 0;
unsigned int i;
int rem, sub;
char *buf;

num = *n;
prev = *n;
if (*n == 0)
{
*n = prev;
return (1);
}
while (*n > 0)
{
size++;
*n /= 2;
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
buf[sub] = 49;
bin_num = binary_to_uint(buf);
*n = bin_num;
return (1);
}
