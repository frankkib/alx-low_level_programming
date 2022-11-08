#include <stdio.h>
/**
 * main - the function printing number of arguments passed
 * @argc: this are the number of arguments
 * @argv: this size of the array
 * Return: 0;
 */
int main(int argc char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
