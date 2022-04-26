#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string pointer to be searched.
 * @accept: The string pointer to be searched for.
 *
 * Return: A pointer to the matched byte if a set is matched.
 *	   NULL if otherwise.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}

		s++;
	}
	return ('\0');
}
