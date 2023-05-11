#include "search_algos.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * binary_search - function that searches along the tree
 * @array: the size of the array being searched
 * @size: the size of the array
 * @value: the value being searched
 * Return: Always 1 on success
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, i;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array:");
		for (i = left ; i < right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(",");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
