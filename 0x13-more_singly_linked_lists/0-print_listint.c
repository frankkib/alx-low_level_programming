#include "lists.h"
/**
 * print_listint - function that prints a list of integers
 * @h: the number lists to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int number;

	while (h != NULL)
	{
		h = h->next;
		number++;
		printf("%d\n", h->n);
	}
	return (number);
}
