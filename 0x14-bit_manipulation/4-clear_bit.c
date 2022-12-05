#include "main.h"
/**
 * clear_bit - function that clears bits
 * @n: integer to cleared
 * @index: where its located
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);
	j = 1 << index;
	if (*n & j)
		*n ^= j;
	return (1);
}
