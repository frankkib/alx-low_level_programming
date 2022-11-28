#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - function that prints the list
 * @h: the pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			number++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		number++;
	}
	return (number);
}
