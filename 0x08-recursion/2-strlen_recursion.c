#include "main.h"

/**
 * _strlen_recursion - Returns length of string.
 * @s: String pointer who's length is to be found.
 *
 * Return: The length of string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + i);
	}
	return (i);
}
