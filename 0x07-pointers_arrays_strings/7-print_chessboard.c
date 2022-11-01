#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function that prints a chessboard
 * @a: the pointer to array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int num, j;

	for (num = 0; num < 8; num++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[num][n]);
		_putchar('\n');
	}
}
