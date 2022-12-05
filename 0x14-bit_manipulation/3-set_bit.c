#include "main.h"
/**
 * set_bit - fucntion that sets a bit to a value
 * @n: pointer to the value
 * @index: where the value is located
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);
	num = 1 << index;
	*n = (*n | num);
	return (1);
}
