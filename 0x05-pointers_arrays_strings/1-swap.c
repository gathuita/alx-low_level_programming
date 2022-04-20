#include "main.h"

/**
 * swap_int - swaps the value of 2 integers.
 * @a: first pointer.
 * @b: second pointer.
 */

void swap_int(inta *a, int *b)
{
	int i;
	i = *a;
	*a = *b;
	*b = i;
}
