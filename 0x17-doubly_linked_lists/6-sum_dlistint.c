#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * sum_dlistint - function that adds a total sum of the list
 * @head: pointer to the beginning of the list
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *num;

	for (num = head; num != NULL; num = num->next)
	{
		sum += num->n;
	}
	return (sum);
}
