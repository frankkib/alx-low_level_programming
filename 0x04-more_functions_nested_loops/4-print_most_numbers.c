#include "main.h"
/**
 * print_most_numbers - prints interger numbers but not 2 and 9
 * Returns: Always 0
 */
void print_most_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
