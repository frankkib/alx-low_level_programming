#include "main.h"
/**
 * sqfunction - the main entry point
 * @n : ther number
 * @p: the square of the number
 * Return: -1 erroor
 */
int sqfunction(int n, int p)
{
	if ((p * p) == n)
	{
		return (p);
	}
	else
	{
		if ((p * p) > n)
			return (-1);
		else
			return (sqfunction(n, p + 1));
	}
}
/**
 * _sqrt_recursion - function for finding a square root of a number
 * @n: the number
 * Return: square for n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-0);
	}
		return (sqfunction(n, 0));
}
