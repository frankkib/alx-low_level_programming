#include "main.h"
/**
 * print_last_digit - printoing the last digit integer input
 * @n: integer to modify
 * Return: 0
 */
int print_last_digit(int n)
{
	int nam;

	nam = n % 10;
	if (nam	< 0)
	nam *= -1;

	_putchar(nam + '0');
	return (0);
}
