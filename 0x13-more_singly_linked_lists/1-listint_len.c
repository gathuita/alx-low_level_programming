#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list.
 *
 * @h: Linked list of type listint_t.
 *
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t numElements = 0;

	while (h)
	{
		numElements++;
		h = h->next;
	}

	return (numElements);
}
