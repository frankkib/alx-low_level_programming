#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that binary to integer
 * @b: the binary number
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int base = 0;
	unsigned int power;

	if (b == NULL)
		return (0);
	while (b[base] == '\0' || b[base] == '1')
	{
		power <<= 1;
		power += b[base] - '0';
		base++;
	}
	return (power);
}

