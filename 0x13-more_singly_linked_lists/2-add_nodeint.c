#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of listint_t.
 *
 * @head: Double pointer to the head of listint_t.
 * @n: An int to be stored in node.
 *
 * Return: Address of new node and NULL incase of failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = NULL;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
