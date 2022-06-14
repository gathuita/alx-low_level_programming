#include "lists.h"

/**
 * sum_listint - Sums up data in nodes.
 *
 * @head: Pointer to first node.
 *
 * Return: Sum of data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
