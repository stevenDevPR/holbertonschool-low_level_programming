#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - main function
 * @n: value
 * @head: head
 * Return: new node or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	if (*head)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
