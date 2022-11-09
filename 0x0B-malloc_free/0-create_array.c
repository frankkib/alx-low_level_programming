#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates arrays of charcters
 * @size: this the size of the array
 * @c: the instialized charcters
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ch;

	if (size == 0)
	{
		return (NULL);
	}
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)

		return (NULL);
		for (j = 0; j < size; j++)
		{
			ch[j] = c;
		}
		return (ch);
}
