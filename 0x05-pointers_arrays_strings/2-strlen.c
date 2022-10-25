#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: the string
 * Return: returns the length
 */
int _strlen(char *s)
{
	int len;

	for ( ; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
