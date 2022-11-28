#include "lists.h"
/**
 * free_list - function that fres the list
 * @head: the start of the list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
