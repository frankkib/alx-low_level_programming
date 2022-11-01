#include "main.h"
/**
 * _strspn - the entry point
 * @s: the string segment
 * @accept: the bytes to be included
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int nam, j, length;

	length = 0;

	for (nam = 0; s[nam] != '\0'; nam++)
	{
		if (s[nam] == 32 || s[nam] == 9)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[nam] == accept)
					length++;
			}
		}
		else
			return (length);
	}
	return (length);
}
