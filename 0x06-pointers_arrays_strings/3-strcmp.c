#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @str1: First string.
 * @str2: Second string.
 * Return: Difference of the two strings, 0 if they're equal.
 */

int _strcmp(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return (0);
		}
		str1++;
		str2++;
	}
	return (*s1 - *s2);
}
