#include "main.h"
/**
 * print_line - prints a straight line
 * @n: number of times printed
 * Returns: Always 0
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

