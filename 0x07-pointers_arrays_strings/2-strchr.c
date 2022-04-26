#include "main.h"

/**
 * _strchr - function that locates character in string.
 * 
 * @s: pointer to string where character is located from.
 * @c: Character to be located.
 *
 * Return: Pointer to first occurence of @c in @s,
 *     NULL if char is not found.
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
