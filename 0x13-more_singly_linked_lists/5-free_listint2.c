#include "lists.h"
/**
 * free_listint2 - function that frees the struct
 * @head: the pointer to the struct to be freed
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
