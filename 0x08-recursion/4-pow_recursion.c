#include "main.h"
/**
 * _pow_recursion - function that returns the power of anumber
 * @x: is the numbent _pow_recursion(int x, int y)r
 * @y: this is the power
 * Return: the power @x to @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
