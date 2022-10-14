#include <stdio.h>
/**
 * main - entry point
 * return: 0
 */
int main(void)
{
	int a;
	float b;
	double c;
	char d;

	printf("int size: %ld bytes\n", (sizeof(a));
	printf("float size: %ld bytes\n", sizeof(b));
	printf("double size: %ld bytes\n", sizeof(c));
	printf("char size: %ldbyte\n", sizeof(d));
	return (0);
}
