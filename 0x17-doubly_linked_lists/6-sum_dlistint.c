#include "lists.h"

/**
 * sum_dlistint - returns the sum og all data
 * @head: head of the list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
