#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function to change from lowercase to uppercase
 * @str: pointer to be converted
 * Return: str
 */
char *string_toupper(char *str)
{
	int num = 0;

	while (str[num++])
	{
		if (str[num] >= 'a' && str[num] <= 'z')
			str(num) -= 32;
	}
	return (str);
}
