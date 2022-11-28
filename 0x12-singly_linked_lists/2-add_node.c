#include "lists.h"
/**
 * add_node - functon that adds a node to the beginning of a list
 * @head: ponter to the first node
 * @str: string to add
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		return (NULL);
		free(temp);
	}
	temp->next = *head;
	temp->str = strdup(str);
	*head = temp;
	return (*head);
}
