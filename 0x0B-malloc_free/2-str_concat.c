#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates astring
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *numstr;
	int index1, index2, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index1 = 0; s1[index1] != '\0'; index1++)
		for (index2 = 0; s2[index2] != '\0'; index2++)
			length = index1 + index2;
	numstr = malloc(sizeof(char) * length);
	if (numstr == NULL)
		return (NULL);
	for (index1 = 0; s1[index1]; index1++)
		numstr[index2] = s1[index1];
	for (index1 = 0; s2[index1]; index1++)
		numstr[index2] = s2[index1];
	return (numstr);
}
