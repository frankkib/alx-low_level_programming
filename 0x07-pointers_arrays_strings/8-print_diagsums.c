#include "main.h"
/**
 * print_diagsums - function that prints two diagonals
 * @a: matrix to sum
 * @size: size of the matrix
 * Return: 0 Always
 */
void print_diagsums(int *a, int size)
{
	int num, sum = 0, sum1 = 0;

	for (num = 0; num < size; num++)
	{
		sum += a[num];
		a += size;
	}
	a -= size;
	for (num = 0; num < size; num++)
	{
		sum1 += a[num];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
