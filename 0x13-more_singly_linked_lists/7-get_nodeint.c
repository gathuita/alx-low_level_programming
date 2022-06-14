#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of list.
 *
 * @head: Pointer to first node
 * @index: Indexof the node starting from 0.
 *
 * Return: nth node of linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
