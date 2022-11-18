#include <stdio.h>
#include "variadic_functions.h"
/**
 *  sum_them_all - funtion that sums all the parameters.
 *  @n: the number of elements
 *  Return: 0
 */
nt sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, j;
	va_list list;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		sum += va_list(list, int);
	}
	va_end(list);
	return (sum);
}

