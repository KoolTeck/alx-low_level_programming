/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
int c;
int i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
