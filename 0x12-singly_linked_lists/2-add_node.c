#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at beginning of a linked list
 * @head: Double pointer to the list T list
 * @str: New string in the node
 *
 * Return: Address of the new element or NULL if it's fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_l;
	unsigned int len = 0;

	while (str[len])
		len++;

	n_l = malloc(sizeof(list_t));
	if (!n_l)
		return (NULL);

	n_l->str = strdup(str);
	n_l->len = len;
	n_l->next = (*head);
	(*head) = n_l;

	return (*head);
}
