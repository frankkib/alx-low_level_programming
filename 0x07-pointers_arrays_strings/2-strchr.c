#include "main.h"
/**
 * _strchr - the entry point
 * @s: the string which to check
 * @c: the your looking for
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; (s[j] != c) && (s[j] = '\0'); j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return ('\0');
}
