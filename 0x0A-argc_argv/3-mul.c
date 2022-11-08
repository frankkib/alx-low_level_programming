#include <stdio.h>
#include <stdlib.h>
/**
 * main - funtions prints the a multiplication
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
