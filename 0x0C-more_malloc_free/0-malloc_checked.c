#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory of size b.
 *
 * @b: Size of memory to be allocated.
 *
 * Return: Pointer to the allocated memory.
 *	   Incase of failure, terminate the process normally.
 *	   with status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);

	return (mal);
}
