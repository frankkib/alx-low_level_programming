#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - the main entry
 * rand - positive or negative rondom number generated
 * return (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);
	else
	printf("%i si zero\n", n)
	return (0);
}

