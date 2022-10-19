#include "main.h"
/**
 * times_table - To print out nine times tables
 * Return: 0
 */
void times_table(void)
{
	int rows, columns, times;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			_putchar(',');

			times = rows * columns;
			if (times <= 9)
				_putchar(' ');
			else
				  _putchar((times / 10) + '0');

			  _putchar((times % 10) + '0');
		}
		_putchar('\n');

}}
