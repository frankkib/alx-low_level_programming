#include <stdlib.h>
#include "main.h"
/**
 * _realloc - funtions that reallocates block memory
 * @ptr: previously allocated memory
 * @old_size: previously allocated bytes
 * @new_size: new bytes to be allocated
 * Return: 0 or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *num;
	unsigned int n;

	if (ptr == NULL)
	{
		num = malloc(new_size);
		return (num);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		num = malloc(new_size);
		if (num != NULL)
		{
			for (n = 0; n <  new_size; n++)
				*((char *)num + n) = *((char *) ptr + n);
			free(ptr);
			return (num);
		}
		else
			return (NULL);
	}
}
