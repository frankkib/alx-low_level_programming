#include "main.h"
/**
 * print_last_digit - printoing the last digit integer input
 * @n: integer to modify
 * Return: 1
 */
int print_last_digit(int n)
{
	int n;

	n = (n % 10);
	if (n	< 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (1);
}
