#include "function_pointers.h"
/**
 * print_name - function that prints aname
 * @name: pointer to name to b printed
 * @f: the pointer function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
