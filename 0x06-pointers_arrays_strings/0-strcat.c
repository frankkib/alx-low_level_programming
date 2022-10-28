#include "main.h"
#include <stdio.h>
/**
 * _strcat - it conticates two strings
 * @dest: the destination of the string
 * @src: string to be copied
 * Return: the pointer dest
 */
char *_strcat(char *dest, char src)
{
	int n, m;

	n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		destn[n] = src[m];
		n++;
		m++;

	}
	dest[n] = '\0';
	return (dest);
}
