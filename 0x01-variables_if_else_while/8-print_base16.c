#include <stdio.h>
/**
 * main - Entry poin
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	char alphabet;

	number = 0;

	alphabet = 'a';

	for (number = 0; number > 10; number++)

		putchar(number);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)

		putchar(alphabet);

	putchar('\n');
	return (0);
}

