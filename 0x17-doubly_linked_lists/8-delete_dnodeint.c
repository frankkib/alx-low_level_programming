#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - function that deletes a node
 * @head: pointer to the first node
 * @index: location of the node to be deleted
 * Return: 0 Always succes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first_node;
	unsigned int num_0f_nodes;

	if (head == NULL || *head == NULL)
		return (-1);
	first_node = *head;
	if (index == 0)
	{
		*head = first_node->next;
		if (first_node->next != NULL)
		{
			(*head)->prev = NULL;
		}
		free(first_node);
		return (1);
	}
	num_0f_nodes = 0;
	while (num_0f_nodes < index)
	{
		if (first_node->next == NULL)
			return (-1);
		first_node = first_node->next;
		num_0f_nodes++;
	}
	first_node->prev->next = first_node->next;
	free(first_node);
	return (1);
}
