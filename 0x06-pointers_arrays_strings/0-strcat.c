#include "main.h"
/**
 * _strcat - it conticates two strings
 * @dest: the destination of the string
 * @src: string to be copied
 * Return: the pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
