#include "main.h"

/**
 * _strstr - Finds the firdt occurence of the
 *	     substring @needle in string @haystack.
 *
 * @needle: Substring to be located.
 * @haystack: Location of substring @needle.
 *
 * Return: Pointer to the beginning of located substring.
 *	   NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
