#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of times to be printed
 * Returns: always 0
 */
void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
