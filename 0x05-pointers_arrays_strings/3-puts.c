#include "main.h"
/**
 * _puts - this prints a string
 * @str: the parameter
 * Return: characters printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
