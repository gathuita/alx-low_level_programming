#include <main.h>
#include <stdio.h>

/**
 * main - check whether is upper or lower
 *
 * Return: Always 0 if success
 */
int _isupper(int c)
{
	int c;
	c = 'A';
	_putchar("%c: %d\n", c, _isupper));

	c = 'a';
        _putchar("%c: %d\n", c, _isupper));

	return (0);
}
