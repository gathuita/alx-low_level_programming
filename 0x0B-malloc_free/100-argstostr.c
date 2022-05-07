#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate arguments to a string.
 *
 * @ac: Number of arguments passed.
 * @av: Array of pointers to args.
 *
 * Return: Pointer to new string.
 *	   NULL if ac is 0, av NULL or in failure
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0;
	int l = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];

		s[k++] = '\n';
	}

	s[l] = '\0';

	return (s);
}
