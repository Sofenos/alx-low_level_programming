#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Count the elements of list T list
 * @h: Pointer 2  list
 * Return: Number of elment
 */
size_t list_len(const list_t *h)
{
	size_t elms = 0;

	while (h)
	{
		elms++;
		h = h->next;
	}
	return (elms);
}
