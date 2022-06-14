#include "lists.h"

/**
 * free_listint - Frees a list.
 *
 * @head: Pointer to first node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head)
	{
		tempNode = head->next;
		free(head);
		head = tempNode;
	}
}
