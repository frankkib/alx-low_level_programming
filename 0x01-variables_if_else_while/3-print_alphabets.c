#include <stdio.h>
/**
 *main - Entry point
 * Return: 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	alphabet = 'A';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)

	putchar(alphabet);

	putchar('\n');
	return (0);
}
