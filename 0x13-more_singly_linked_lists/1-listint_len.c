#include "lists.h"
/**
 * listint_len - function return number elements in a list
 * @h: the string list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int number;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
