#include "main.h"
/**
 * print_numbers - For printing numbers
 * Returns: Always 0
 */
void print_numbers(void)
{
	char num = '0';

	for (num = '0'; num < '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}

