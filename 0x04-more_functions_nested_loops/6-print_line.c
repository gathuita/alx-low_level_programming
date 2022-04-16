#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int t = n;

	for (t = n; t > 0; t--)
		_putchar('_');

	_putchar('\n');
}
