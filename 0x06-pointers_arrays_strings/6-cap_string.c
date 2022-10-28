#include "main.h"
#include <stdio.h>
/**
 * cap_string - function that capitalizes every word of a string
 * @n: the string to be capitalized
 * Return: capital string
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[++i] = '\0')

	{
		while (n[i] >= 'a' && n[i] <= 'z')
			i++;
		if (n[i - 1] == ' ' ||
				n[i - 1] == '\t' ||
				n[i - 1] == '\n' ||
				n[i - 1] == ',' ||
				n[i - 1] == ';' ||
				n[i - 1] == '.' ||
				n[i - 1] == '!' ||
				n[i - 1] == '?' ||
				n[i - 1] == '"' ||
				n[i - 1] == '(' ||
				n[i - 1] == ')' ||
				n[i - 1] == '{' ||
				n[i - 1] == '}')
			n[i] -= 32;
	}
	return (n);
}
