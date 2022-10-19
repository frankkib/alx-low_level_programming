#include "main.h"
/**
 * print_last_digit - printoing the last digit integer input
 * @nam: integer to modify
 * Return: 1
 */
int print_last_digit(int nam)
{
	int nam;

	num = (nam % 10);
	if (nam < 0)
	{
		nam = (-1 * nam);
	}
	_putchar(nam + '0');
	return (1);
}
