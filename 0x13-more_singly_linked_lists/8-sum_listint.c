#include "lists.h"

/**
 * sum_listint - Return the sum of all the n data  in the list
 * @head: a pointer to the head
 * Return: sum of all the data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
