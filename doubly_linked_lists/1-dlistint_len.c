#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - main function
 * @h: head
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

