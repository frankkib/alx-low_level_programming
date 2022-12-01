#include "lists.h"
/**
 * sum_listint - function that adds the number of nodes
 * @head: beginning of the node
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
