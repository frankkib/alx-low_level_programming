#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that creates a matrix
 * @width: the width of the matrix
 * @height: the height of the matrix
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int n, k = 0;
	int **ptr;
		if (width == 0 || height == 0)
		{
			return (NULL);
		}
		ptr = (int **)malloc(sizeof(int *) * height);
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < height; k++)
		{
			ptr[k] = (int *)malloc(sizeof(int) * width);
			if (!ptr[k])
			{
				for (n = 0; n < width; n++)
					ptr[k][n] = 0;
			}
			else
			{
				while (n >= 0)
				{
					free(ptr[n]);
					n--;
				}
			}
			return (ptr);
		}
}
