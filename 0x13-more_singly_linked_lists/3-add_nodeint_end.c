#include "lists.h"

/**
 * add_nodeint_end - Appends a new node to linked list.
 *
 * @head: Double pointer to the head of list.
 * @n: Integer stored in node.
 *
 * Return: Address of new node, NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = NULL;
	lastNode = NULL;
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (*head);
}
