#include "lists.h"

/**
 * pop_listint - Deletes head node of a listint_t list.
 *
 * @head: Dpuble pointer to head.
 *
 * Return: Head node's data, 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int data;

	if (*head == NULL)
		return (0);

	tempNode = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tempNode);

	return (data);
}
