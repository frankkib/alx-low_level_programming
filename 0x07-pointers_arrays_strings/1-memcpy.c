#include "main.h"
/**
 * _memcpy - the first entry point
 * @dest: the destination of the copy
 * @src: pionter to source of the coppy
 * @n: the number of bytes to copied
 * Return: the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
