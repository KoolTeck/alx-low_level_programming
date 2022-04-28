#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - prints chessboard arr.
 *
 * @a: pointer to the board arr.
 * Return: Always void.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
i = 0;
while (i < 8)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
if (j == 7)
{
_putchar(10);
}
}
i++;
}
}
