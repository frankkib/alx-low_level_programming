#include "lists.h"
/**
 * add_nodeint - function that add a node
 * @head: this first node beginning
 * @n: integer to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	temp = *head;
	return (temp);
}
