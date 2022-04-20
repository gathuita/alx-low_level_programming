#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - update the value it points to 98.
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	printf("n = %d\n", n);
	*n = 98;
	printf("n = %d\n", n)
}
