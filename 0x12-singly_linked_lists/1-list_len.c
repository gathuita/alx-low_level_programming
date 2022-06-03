#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list.
 *
 * @h: Pointer to list.
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t NumElem = 0;

	while (h)
	{
		NumElem++;
		h = h->next;
	}

	return (NumElem);
}
