#include "main.h"

/**
 * str_len - Finds length of string.
 *
 * @s: String of which length is to be found.
 *
 * Return: The length of the string;
 */
int str_len(const char *s)
{
	int len = 0, idx;

	for (idx = 0; *(s + idx); idx++)
	{
		if (*(s + idx) == '\0')
			break;
		len++;
	}
	return (len);
}

/**
 * power - Finds Power @y of @x.
 *
 * @x: Base number.
 * @y: Exponent.
 *
 * Return: x raised to power y.
 */
int power(int x, int y)
{
	int pow = 0;

	if (y == 0)
		return (1);

	pow = x * power(x, y - 1);

	return (pow);
}

/**
 * binary_to_uint - Converts binary number to unsigned int.
 *
 * @b: Pointer to string of 0 and 1 chars.
 *
 * Return: The converted number, 0 if b is NULL.
 *	   0 if there's one or more chars in b != 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = str_len(b);
	unsigned int dec = 0, idx = 0;

	if (b == NULL)
		return (0);

	while (len > 0)
	{
		--len;
		if (*(b + len) != '0' && *(b + len) != '1')
			return (0);

		dec += (*(b + len) - '0') * power(2, idx);
		idx++;
	}
	return (dec);
}
