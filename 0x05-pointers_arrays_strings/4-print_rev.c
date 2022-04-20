#include "main.h"

/**
 * _strlen - Prints length of string in  normal.
 *
 * @s: character argument passed.
 *
 * Return: The length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: Set of characters
 *
 */

void print_rev(char *s)
{
	int l;
	int i;

	l = _strlen(s);
	i = l;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
