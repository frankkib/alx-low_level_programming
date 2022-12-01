#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of the list
 * @head: the beginning of tha list
 * @n: the number of node to added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *last;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = NULL;
	if (*head != NULL)
	{
		*head = first;
		return (first);
	}
	else
	{
		first = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	
	}
	return (first);
}
