#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 *
 * @h: List whose elements are to be printed.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
