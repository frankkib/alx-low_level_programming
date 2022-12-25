#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int a;
	float b;
	double c;
	char d;

	printf("long int size: %ld bytes\n", (sizeof(a)));
	printf("float size: %ld bytes\n", (sizeof(b)));
	printf("double size: %ld bytes\n", (sizeof(c)));
	printf("char size: %ldbyte\n", (sizeof(d)));
	return (0);
}
