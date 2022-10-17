#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')

			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
