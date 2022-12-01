#include "lists.h"
/**
 * free_listint - function that frees the list
 * @head: pointer to the list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
