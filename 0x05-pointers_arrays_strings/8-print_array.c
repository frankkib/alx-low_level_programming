#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements in an array
 * @a: pointer of the array
 * @n:the number of elements to print
 * Return: 0
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		printf("%d", a[j]);
		if (j != n - 1)
			printf(",");
		j++;
	}
	printf("\n");
}
