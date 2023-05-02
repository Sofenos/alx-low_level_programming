#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
		h = h->next;

	return (num);
}

