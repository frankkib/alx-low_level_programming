#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array:the poniter array containg the elements
 * @size: the size of the array
 * @cmp: this the function poniter to compare
 * Return: If no element matches, return -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
