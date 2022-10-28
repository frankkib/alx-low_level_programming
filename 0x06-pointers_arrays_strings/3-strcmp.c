#include "main.h"
#include <stdio.h>
/**
 * _strcmp - fuction to compare two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: the differance
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	result = s1[i] - s2[i];
	return (result);
}
