#include "main.h"

/**
 * _strlen - the length of a string
 * @s: is the string pointer.
 * Return: always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)

	{
		len++;
	}

	return (len);

}
