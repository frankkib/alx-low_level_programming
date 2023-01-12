#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - fuction that prints the elements of list
 *
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
