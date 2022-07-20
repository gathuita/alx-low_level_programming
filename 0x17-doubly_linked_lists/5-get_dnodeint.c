#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a linked list.
 *
 * @head: The first node
 * @index: Index of node to be returned
 *
 * Return: The nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
