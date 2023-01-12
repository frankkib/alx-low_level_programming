#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - function that prints the length of list
 * @h: pointer to the first node
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
