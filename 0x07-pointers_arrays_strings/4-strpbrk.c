#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function tha locates occurrence of a string
 * @s: string to locate
 * @accept: the bytes to search
 * Return: a pointer to the byte in s that matches one of the bytes in
 *  accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int num, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (num = 0; accept[num] != '\0'; num++)
		{
			if (accept[num] == s[j])
				return (s + j);
		}
	}
	return ('\0');
}
