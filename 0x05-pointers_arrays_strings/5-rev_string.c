#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed pointer.
 */

void rev_string(char *s)
{
	int len, j, i;
	char k1, k2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	j = len - 1;
	i = 0;

	while (j > i)
	{
		k1 = s[i];
		k2 = s[j];
		s[i] = k2;
		s[j] = k1;
		j--;
		i++;
	}
}
