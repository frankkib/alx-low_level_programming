#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints a string
 * @separator: the string printed between strings
 * @n: the number of strings passed
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			s = "nill";
		printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
