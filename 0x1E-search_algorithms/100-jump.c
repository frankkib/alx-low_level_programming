#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 * jump_search - function that searches for value in sorted list
 * @array: pointer to the array  being searched
 * @size: size of the array
 * @value: the value being searched
 * Return: Always 1 on success
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (array == NULL || size == 0)
		return (-1);
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value found between indexes[%lu] and  [%lu]\n", prev, step);
	for (i = prev; i < size && array[i] < value; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (i == size || array[i] > value)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	return (i);
}
