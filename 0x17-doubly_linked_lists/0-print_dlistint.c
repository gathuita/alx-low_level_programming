#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list.
 *
 * @h: The list we search the elements from.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_dlistint = 0;

	while (h)
	{
		num_dlistint++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_dlistint);
}
