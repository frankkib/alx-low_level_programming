#include <stdlib.h>
#include "main.h"
/**
 * _calloc - fuction that allocates memory to an array
 * @nmemb: elements of the array
 * @size: size of the array
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *num;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	num = malloc(nmemb * size);
	if (num == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		*((char *)(num) + j) = 0;
	}
	return (num);
}
