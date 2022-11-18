#include "function_pointers.h"
/**
 * array_iterator - the main function executes each element
 * @array: pointer to the array
 * @size: the size of the array
 * @action: the pointer fuction
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
	{
		size_t j;

		j = 0;
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
