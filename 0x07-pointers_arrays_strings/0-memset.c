#include "main.h"
/**
 * _memset - this is the entry point
 * @s: Destination ponter
 * @b: The constant byte
 * @n: Bytes of memory to be filled
 * Return: Pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
