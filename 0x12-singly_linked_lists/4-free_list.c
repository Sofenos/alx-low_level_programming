#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: list T to freed
 */

void free_list(list_t *head)
{
	list_t *temps;

	while (head)
	{
		temps = head;
		head = head->next;
		free(temps->str);
		free(temps);
	}

	free(head);
}
