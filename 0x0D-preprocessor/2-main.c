#include <stdio.h>
#ifndef FILENAME 
#define FILENAME __FILE__
#endif
/**
 * main - this the main entry point
 * Return:0
 */
int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
