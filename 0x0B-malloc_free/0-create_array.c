#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of memory allocated.
 * @c: The characters initialized to array created.
 * Return:  Pointer to the array.
 * NULL if size == 0.
 * NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	chr = malloc(sizeof(*chr) * size);
	if (chr)
	{
		for (i = 0; i <= size; i++)
			chr[i] = c;
		return (chr);

	}
	else
		return (NULL);

}
