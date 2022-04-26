#include "main.h"

/**
 * _strchr - Locates character in string.
 *
 * @s: Pointer to string where character is located from.
 * @c: Character to be located.
 *
 * Return: Pointer to first occurrence of @c in @s,
 *	   NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = s;

	while (p[i] >= '\0')
	{
		if (p[i] == c)
		{
			return (p + i);
		}
		i++;
	}
	return ('\0');
}
