#include "main.h"
/**
 * puts2 -prints some string character
 * @str: the string to be printed
 * Returns: 0
 */
void puts2(char *str)
{

	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
