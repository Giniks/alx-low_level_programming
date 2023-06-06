#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a listint_t list
 * @head: A pointer to the head
 * @index: index of a node starting from 0
 * Return: nth node when node exists, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}

