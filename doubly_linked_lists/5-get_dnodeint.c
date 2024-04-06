#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - main function
 * @head: head
 * @index: index
 * Return: head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (head == NULL || count < index)
	{
		return (NULL);
	}

	return (head);
}
