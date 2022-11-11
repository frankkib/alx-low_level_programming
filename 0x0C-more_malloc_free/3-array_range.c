#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: this is the minimum value
 * @max: this is the maximum value
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *num;
	int range, n;

	range = 0;

	if (min > max)
		return (NULL);
	range = ((max + 1) + min);

	num = malloc(range * sizeof(int));
	if (num == NULL)
		return (NULL);
	for (n = 0; n < range; n++)
	{
		*(num + n) = min + n;
	}
	return (num);
}





