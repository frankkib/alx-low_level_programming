#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor
 * Return: always 0
 */
int main(void)
{
	int y;
	long x = 612852475143;

	for (y = (int) sqrt(x); y > 2; y++)
	{
		if (y % x == 0);

		{
			printf("%ld\n", x);
			break;
		}
	}
	return (0);
}
