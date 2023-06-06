#include "lists.h"

/**
 * pop_listint - Deletes the head of a node
 * @head: pointer to the pointer to the head
 *
 * Return: if empty 0, otherwise the deleted head of a node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
