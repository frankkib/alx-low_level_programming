#include "main.h"
#include <stdio.h>
/**
 * reverse_array -function that reverses the contents of an array
 * @a: the array to be reversed
 * @n: elements to be reversed
 * Return:0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = a[i];
		a[i++] = a[n--];
		a[n] = j;
	}
}
