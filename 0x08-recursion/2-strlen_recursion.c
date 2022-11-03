#include "main.h"
/**
 * _strlen_recursion - function that returns the string length
 * @s: the string parameter
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
