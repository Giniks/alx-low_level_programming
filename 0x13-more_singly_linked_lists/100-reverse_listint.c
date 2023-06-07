#include "lists.h"

/**
 * reverse_listint - Reverses a listint linked list
 * @head: A pointer to the head
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;


	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	while ((*head)->next != NULL)
	{
		listint_t *temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	(*head)->next = prev;
	return (*head);
}
