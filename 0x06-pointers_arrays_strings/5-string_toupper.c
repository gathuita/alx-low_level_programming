#include "main.h"

/**
 * string_toupper - Converts lowercase characters to uppercase.
 * @a: String pointer.
 * Return: String pointer.
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (*(a + i))
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + i) -= 32;
		}
		i++;
	}
	return (a);
}
