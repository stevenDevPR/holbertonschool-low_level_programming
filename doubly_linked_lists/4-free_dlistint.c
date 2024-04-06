#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - main function
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (!current)
	{
		dlistint_t *temp = current->next;

		free(current);
		current = temp;

	}
}
