#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - function that adds a node to the beginning of list
 * @head: pointer to the beginning of a list
 * @n: data of the node to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_node;

	first_node = malloc(sizeof(dlistint_t));
	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	first_node->next = *head;
	first_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = first_node;
	*head = first_node;
	return (first_node);
}
