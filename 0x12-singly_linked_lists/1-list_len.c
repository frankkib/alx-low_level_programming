#include "lists.h"
/**
 * list_len - the function that prints the length of the list
 * @h: the pointer to the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
