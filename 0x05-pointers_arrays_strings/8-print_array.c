#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an input number of elements
 *               of an array of integers.
 *
 * @arr: An array of integers.
 *
 * @n: The number of elements to be printed.
 */
void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
