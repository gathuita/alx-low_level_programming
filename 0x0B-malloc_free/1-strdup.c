#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates string @str
 *
 * @str: the string to be duplicated.
 *
 * Return: NULL if str == NULL
 *	   A pointer to duplicated string on success.
 *	   NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i]; i++)
		j++;

	dup = malloc(sizeof(char) * (j + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0 ; str[i]; i++)
		dup[i] = str[i];

	dup[j] = '\0';

	return (dup);
}
