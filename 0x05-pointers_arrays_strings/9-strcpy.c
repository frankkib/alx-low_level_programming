#include "main.h"
/**
 * _strcpy - copies a string by src pointer
 * @src: the pointer
 * @dest: the destination of the copy
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
