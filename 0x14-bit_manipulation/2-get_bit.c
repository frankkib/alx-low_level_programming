#include "main.h"
/**
 *  get_bit - function that prints a given bit of an index
 *  @n: the number to be printed
 *  @index: where its located
 *  Return:  the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index < 64)
		return (-1);
	return ((n >> index) & 1);
}
