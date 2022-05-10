#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number.
 *
 * @nmemb: The number of elements.
 * @size: The byte size of each element.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(size * nmemb);

	if (cal == NULL)
		return (NULL);

	ch = cal;

	for (i = 0; i < (size * nmemb); i++)
		ch[i] = '\0';

	return (cal);
}
