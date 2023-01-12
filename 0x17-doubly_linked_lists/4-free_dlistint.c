#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - function that frees a list
 * @head: pointer to the first node
 * Return: 0 Always succes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

