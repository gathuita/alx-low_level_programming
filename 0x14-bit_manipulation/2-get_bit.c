#include "main.h"

/**
 * get_bit - Returns value of a bit at a given index.
 *
 * @n: The number.
 * @index: Index starting from 0 of bit.
 *
 * Return: Value of bit at index @index
 *	   or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx = index;

	if (idx >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << idx)) == 0)
		return (0);

	return (1);
}
