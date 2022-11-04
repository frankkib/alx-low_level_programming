#include "main.h"
/**
 * prime - function for finding prime numbers
 * @i: number to be  checked
 * @j: the number of times to be checked
 * Return: prime number
 */
int prime(int i, int j)
{
	if (i <= 1 || i % j == 0)
		return (0);
	else if (i == j)
		return (1);
	else if (i > j)
		prime(i, j + 1);
	return (1);
}
/**
 * is_prime_number - checks if the integer is prime
 * @n: number to be checked
 * Return: 1 if the input intege  otherwise return 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
