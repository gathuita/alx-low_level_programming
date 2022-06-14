#include "lists.h"

/**
 * free_listint2 - Sets @head to NULL.
 *
 * @head: Double pointer to first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	if (head == NULL)
		return;

	while (*head)
	{
		tempNode = (*head)->next;
		free(*head);
		*head = tempNode;
	}

	head = NULL;
}
