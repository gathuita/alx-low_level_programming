#include "main.h"
#include <stdio>

/**
 * malloc_checked - allocate memoryt of size b.
 * @b: size of memory expectedto be allocated.
 *
 * Return: pointer to the allocated memory.
 *     >incase of failure, terminate process normally
 *     >with status value (98).
 */

void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal = NULL)
		exit(98);

	return (mal);
}
