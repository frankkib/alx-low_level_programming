#include "main.h"
/**
 * factorial - finds the factorial of number
 * @n: the number your finding it factioral
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 && n == 1)
		return (1);
	return (n * factorial(n - 1));
}
