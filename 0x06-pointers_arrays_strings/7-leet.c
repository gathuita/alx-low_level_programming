#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @str: String argument passed.
 *
 * Return: String pointer.
 */
char *leet(char *str)
{
	int index1 = 0, index2;
	char i[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == i[index2] ||
			    str[index1] - 32 == i[index2])
				str[index1] = index2 + '0';
		}

		index1++;
	}

	return (str);
}
