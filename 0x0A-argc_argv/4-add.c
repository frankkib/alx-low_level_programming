#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints sum of arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	{
		for (j = 1; j < argc; j++)
		{
			for (i = 0; argv[j][i] != '\0'; i++)
			{
				if (argv[j][i] < '0' || argv[j][i] > '9')
					printf("error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
