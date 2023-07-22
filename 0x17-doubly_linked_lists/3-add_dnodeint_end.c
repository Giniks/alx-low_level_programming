#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		h = *head;

		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	return (new);
}
