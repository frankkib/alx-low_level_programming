#include <stdio.h>
#include <stdlib.h>
/**
 * main - functions that prints a change being given
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins, cents = 0;

	coins = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		{
			for ( ; cents >= 25; coins++)
			{
				cents -=  25;
			}
			for ( ; cents >= 10; coins++)
			{
				cents -= 10;
			}
			for ( ; cents >= 5; coins++)
			{
				cents -= 5;
			}
			for ( ; cents >= 2; coins++)
			{
				cents -=  2;
			}
			for ( ; cents >= 1; coins++)
			{
				cents -= 1;
			}
		}
		printf("error\n");
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
