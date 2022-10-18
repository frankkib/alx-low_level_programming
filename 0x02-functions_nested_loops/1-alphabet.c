#include "main.h"
/**
 * print_alphabet - entry point
 * Description: Prints the alphabet with _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
