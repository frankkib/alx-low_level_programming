#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor
 * Return: always 0
 */
int main(void)
{
	unsigned long int y, x = 612852475143;

	for (y = 3; y < 782849; y++)
	{
		while ((x % y  == 0) && (x != y))
			x = x / y;

	}
	printf("%lu\n", x);
	return (0);
}
