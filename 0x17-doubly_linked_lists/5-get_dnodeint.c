#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - function tha returns an node at certain index
 * @head: the head of the list
 * @index: the indes to be checked
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_head;
	unsigned int num;

	curr_head = head;
	num = 0;
	while (curr_head != NULL)
	{
		if (num == index)
			return (curr_head);
		curr_head = curr_head->next;
		num++;
	}
	return (NULL);
}
