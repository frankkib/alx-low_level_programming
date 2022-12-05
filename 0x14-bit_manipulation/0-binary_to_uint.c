#include "main.h"
/**
 * binary_to_uint - function that binary to integer
 * @b: the binary number
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int base, num;
	unsigned int power;

	if (!b)
		return (0);
	for (num = 0; b[num] != '\0'; num++)
		;
	for (num--, base = 1; num > 0; num--, base *= 2)
	{
		if (b[num] != '\0' && b[num] != 1)
		{
			return (0);
		}
		if (b[num] & 1)
		{
			power += base;
		}
	}
	return (power);
}

