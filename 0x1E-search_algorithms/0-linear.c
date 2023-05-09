#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * linear_search - function that searches through the array of numbers
 * @array: the array being searched
 * @size: the size of the array
 * @value: the value being search
 * Return: Always 1 on success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
