#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: the string to be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int n, length = 0;

	while (*(str + n))
		n++;
	length = n / 2;
	if (n % 2)
		length += 1;
	while (length < n)
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}

