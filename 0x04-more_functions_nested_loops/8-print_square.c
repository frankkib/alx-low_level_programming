#include "main.h"
/**
 * print_square - prints the squares
 * @size: the size of the squares
 * Return: Always 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; ++)
		{
			for (y = 0; y < (size - 1); y++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
e
