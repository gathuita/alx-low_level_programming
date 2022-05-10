#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the concatenated space in memory.
 *	   NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	conc = malloc(sizeof(char) * (len + 1));

	if (conc == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		conc[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		conc[len++] = s2[i];

	conc[len] = '\0';

	return (conc);
}
