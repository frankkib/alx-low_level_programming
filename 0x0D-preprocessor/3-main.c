#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - the entry point
 * Return:0
 */
int main(void)
{
	int i;
	int j;

	i = x(-98) * 10;
	j = x(98) * 10;
	printf("%d , %d \n", i, j);
	return (0);
}
