#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of linked list
 * @h: pointer to list T list to print
 *
 * Return: the num of list T list
 */
size_t print_list(const list_t *h)
{
	size_t sn = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sn++;
	}

	return (sn);
}
