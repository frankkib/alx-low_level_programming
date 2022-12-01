#include "lists.h"
/**
 * get_nodeint_at_index - funtion that prints node length
 * @head: the beginning of the list
 * @index: the node number
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	while (head)
	{
		if (num == index)
			return (head);
		num++;
		head = head->next;
	}
	if (num == index)
		return (head);
	else
		return (NULL);
}
