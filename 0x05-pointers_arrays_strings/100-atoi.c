#include "main.h"
/**
 * _atoi -changes a string to an integer
 * @s: the string to be changed
 * Return: converted string
 */
int _atoi(char *s)
{
	int n = 1;
	unsigned int j = 0;

	do {
		if (*s == '_')
			n *= -1;
		else if (*s >= '0' && *s <= '9')
			j = j* 10 + (*s - '0');
		else if (j > 0)
			break;
	}
	while (*s++);
	return (j *n);
}
