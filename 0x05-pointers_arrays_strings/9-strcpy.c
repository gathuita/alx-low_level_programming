#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@source: pointer.
 *@destination: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *destination, char *source)
{
	int i, length;

	for (length = 0; source[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		destination[i] = source[i];
	}
	return (destination);
}
