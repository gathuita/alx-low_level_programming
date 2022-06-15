#include "main.h"

/**
 * clear_bit - Sets value of a bit at given index to 0.
 *
 * @n: Pointer to the number.
 * @index: Index to set value at.
 *
 * Return: 1 or -1 upon errors.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx = index;

	if (idx >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << idx);

	return (1);
}
