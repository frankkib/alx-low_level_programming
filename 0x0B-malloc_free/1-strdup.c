#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that prints newly allocated memory
 * @str: the pointer string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *num;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		num = malloc(sizeof(char) * (i++));
		if (num == NULL)
		{
			return (NULL);
		}
	}
	for (j = 0; j < i; j++)
	{
		num[i] = str[i];
	}
	num[i] = '\0';
	return (num);
}
