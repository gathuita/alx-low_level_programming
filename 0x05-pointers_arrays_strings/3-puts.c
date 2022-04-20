#include "main.h"

/**
 * _puts - prints a string.
 * @str: is the sring pointer.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
