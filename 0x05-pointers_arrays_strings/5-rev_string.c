#include "main.h"
/**
 * rev_string - it reverses a string
 * @s: the string to be reversed
 * Returns:0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int i, j;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
