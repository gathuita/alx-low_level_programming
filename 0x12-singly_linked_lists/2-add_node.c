#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: The list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
