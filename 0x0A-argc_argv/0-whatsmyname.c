#include <stdio.h>
/**
 * main - fucnction that prints argument followed with a newline
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
