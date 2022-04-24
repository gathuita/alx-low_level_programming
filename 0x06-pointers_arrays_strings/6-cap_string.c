#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @a: an argument passed.
 * Return: String pointer.
 */
char *cap_string(char *a)
{
	int i = 0;
	int c = 0;

	while (*(a + i))
	{
		if (*(a + i) == ',' || *(a + i) == ';' || *(a + i) == '.'
		|| *(a + i) == '!' || *(a + i) == '?' || *(a + i) == '"'
		|| *(a + i) == '(' || *(a + i) == ')' || *(a + i) == '\n'
		|| *(a + i) == '{' || *(a + i) == '}' || *(a + i) == ' '
		|| *(a + i) == '\t')
			c = 1;
		else if (*(a + i) >= 'a' && *(a + i) <= 'z' && (c == 1 || i == 0))
		{
			*(a + i) -= 32;
			c = 0;
		}
		else
		{
			c = 0;
		}
		i++;
	}
	return (a);
}
