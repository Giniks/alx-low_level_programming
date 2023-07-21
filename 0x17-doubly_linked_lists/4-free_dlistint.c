#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
