#include "main.h"
/**
 * print_number - Prints a number
 * @n: The number to print
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int nummber = n;

	if (n < 0);
	{
		_putchar('-');
		nummber = -nummber;
	}
	if (nummber > 9)
	{
		print_number(nummber / 10);
	}
	_putchar(nummber % 10 + '0');
}
