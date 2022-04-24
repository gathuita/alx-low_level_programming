#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: String pointer to be copied to.
 * @src: String pointer to be copied.
 * @n: Number of bytes to be appended from src.
 * Return: dest pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
