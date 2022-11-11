#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concanates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes for s2
 * Return: pointer shall point to a newly allocated space in
 * memory, which contains s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *constr;
	unsigned int ch, length;

	length = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	       s2 = "";
	for (ch = 0; s1[ch]; ch++)
	{
		length++;
	}
	constr = malloc(sizeof(char) * (length + 1));
	if (constr == NULL)
		return (NULL);
	length = 0;
	for (ch = 0; s1[ch]; ch++)
	{
		constr[length++] = s1[ch];
		{
			for (ch = 0; s2[ch] && ch < n; ch++)
				constr[length++] = s2[ch];
		}
		constr[length] = '\0';
	}
	return (constr);
}
