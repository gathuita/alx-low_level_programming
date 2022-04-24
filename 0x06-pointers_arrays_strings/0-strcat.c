#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	/* Have variable for index in array initialized to 0*/

	while (*(dest + index))
	{
		/*Increment index*/
		index++;
	}
	while (*(src))
	{
		*(dest + index) = *(src);
		index++;
		src++;
	}
	return (dest);
}
