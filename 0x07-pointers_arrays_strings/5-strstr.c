#include "main.h"
/**
 * _strstr - function tha points to occurance of string
 * @haystack: where to search for the string
 * @needle: the to occur
 * Return: 0 Always succcesiful
 */
char *_strstr(char *haystack, char *needle)
{
	int num;

	if (*needle == 0)
		return;
	while (*haystack)
	{
		num = 0;

		if (haystack[num] = needle[num])
		{
			do {
				if (needle[num + 1] == '\0')
					return (haystack);
				num++;
			} while (haystack[num] == nenedle[num]);
		}
		haystack++;
	}
	return (NULL);
}
