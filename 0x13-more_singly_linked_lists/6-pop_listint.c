#include "lists.h"
/**
 * pop_listint - function that deletes a node
 * @head: beginning of the node
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	free(temp);
	*head = temp->next;
	return (n);
}
