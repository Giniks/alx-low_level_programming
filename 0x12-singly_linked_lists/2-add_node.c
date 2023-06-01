#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new nodes at the starting point of the linked list.
 * @head: A pointer to a pointer to the head of the list
 * @str: string to be duplicated and added to a new node
 * Return: New element's adress if successful, otherwise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
