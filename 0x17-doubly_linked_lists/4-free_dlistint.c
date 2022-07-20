#include "lists.h"

/**
 * free_dlistint - Frees a linked list.
 *
 * @head: First node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
