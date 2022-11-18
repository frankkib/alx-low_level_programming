#include "3-calc.h"
/**
 * main - function for checking arguments
 * @argc: Argument count
 * @argv: Argment vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char p;
	int a, b, nam;

	a = 0;
	b = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	p = argv[2][0];
	if (p != '+' && p != '-' && p != '/' && p != '*' && p != '%')
	{
		printf("Error\n");
	exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	nam = (get_op_func(argv[1]))(a, b);
	printf("%d\n", nam);
	return (0);
}
