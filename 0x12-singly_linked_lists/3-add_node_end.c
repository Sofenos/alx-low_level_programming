#include "lists.h"

/**
 * add_node_end - add new node in the end
 * of list T list
 * @head: head of linked list
 * @str: string to store in list
 * Return: address of this head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *c_node;
	size_t x;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	n_node->len = x;
	n_node->next = NULL;
	c_node = *head;

	if (c_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (c_node->next != NULL)
			c_node = c_node->next;
		c_node->next = n_node;
	}

	return (*head);
}
