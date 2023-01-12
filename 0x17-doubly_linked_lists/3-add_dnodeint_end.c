#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - function that adds a node in the end
 * @head: pointer to the beginning of the list
 * @n: data to be added in the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *first_node;

	first_node = malloc(sizeof(dlistint_t));
	if (first_node == NULL)
		return (NULL);
	first_node->n = n;
	first_node->next = NULL;
	if (*head == NULL)
	{
		first_node->prev = NULL;
		*head = first_node;
		return (first_node);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = first_node;
	first_node->prev = *head;
	return (first_node);
}

