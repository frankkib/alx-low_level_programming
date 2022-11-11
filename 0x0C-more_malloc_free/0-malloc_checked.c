#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function for memory allocation
 * @b: size of memory block to allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)

		exit(98);

	return (mem);
}
