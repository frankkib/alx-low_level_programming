#include "lists.h"
/**
 * print_listint - function that prints a list of integers
 * @h: the number lists to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int number;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			number++;
		}
	}
	return (number);
}
