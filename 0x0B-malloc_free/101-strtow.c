#include "main.h"
#include <stdlib.h>

int len(char *str);
int word(char *str);

/**
 * len - Locates the index marking the end of the
 *       first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking.
 */
int len(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}

	return (j);
}

/**
 * words - Counts the number of words within a string.
 * @str: The string to be searched.
 *
 * Return: Number of words contained in @str.
 */
int words(char *str)
{
	int i = 0, j = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			j++;
			i += len(str + i);
		}
	}

	return (j);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings.
 *	   NULL is str == NULL || str == "" and if in failure.
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, j, k, l, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	j = words(str);
	if (j == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < j; k++)
	{
		while (str[i] == ' ')
			i++;

		l = len(str + i);

		s[k] = malloc(sizeof(char) * (l + 1));

		if (s[k] == NULL)
		{
			for (; k >= 0; k--)
				free(s[k]);

			free(s);
			return (NULL);
		}

		for (m = 0; m < l; m++)
			s[k][m] = str[i++];

		s[k][m] = '\0';
	}
	s[k] = NULL;

	return (s);
}
