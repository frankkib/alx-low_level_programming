#include "lists.h"
/**
 * add_node_end - function that adds a node to the end of the list
 * @head: the beginning of the list
 * @str: the string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *last;
	char *string;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		return (NULL);
		free(first);
	}
	first->next = NULL;
	first->str = string;
	if (*head == NULL)
		*head = first;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	}
	return (first);
}

