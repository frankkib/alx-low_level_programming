#include "main.h"
/**
 * _strncat - it concatenates two strings with n
 * @dest: string destination
 * @src: string to be copied
 * @n: integer parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
