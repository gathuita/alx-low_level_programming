#include "main.h"

/**
 * set_bit - Sets value of a bit to 1 at a given index.
 *
 * @n: Pointer to the number.
 * @index: Index, starting from 0, of the bit to set.
 *
 * Return: 1 on success and -1 if otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx = index;

	if (idx >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << idx);

	return (1);
}
