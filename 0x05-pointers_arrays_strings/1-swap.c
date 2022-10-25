#include "main.h"
/**
 * swap_int - swaps the two integrs
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
