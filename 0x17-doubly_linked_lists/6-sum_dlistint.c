#include "lists.h"

/**
 * sum_dlistint - Return sum of all the data in a linked list.
 *
 * @head: First node of the list.
 *
 * Return: Sum of all the elements(n) in a linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
