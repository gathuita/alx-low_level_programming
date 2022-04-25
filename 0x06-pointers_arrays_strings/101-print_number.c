#include "main.h"

/**
 *print_number - print a number using _putchar.
 *@num: the number to be printed.
 */

void print_number(int num)
{
	unsigned int i = 1;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num == 0)
		_putchar('0');
	else
	{
		while ((num / i) >= 10)
			i *= 10;

		while (i > 0)
		{
			_putchar((num / i) + '0');
			num %= i;
			i /= 10;
		}
	}
}
