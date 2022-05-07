#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid of ints.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to the array.
 */
int **alloc_grid(int width, int height)
{
int  i, j, size;
int **arr;
if (width == 0 || height == 0)
{
return (NULL);
}
size = height * sizeof(int *);
arr = (int **)malloc(size);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
if (arr[i] == NULL)
{
while (i >= 0)
{
free(arr[i]);
i--;
}
free(arr);
return (NULL);
}
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
