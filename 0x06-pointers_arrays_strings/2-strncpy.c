#include "main.h"
#include <stdio.h>
/**
 *  _strncpy - function for copiying a string
 *  @dest: the destination of the string
 *  @src: the source of the string
 *  @n: the parameter to copy
 *  Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (j = 0; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
