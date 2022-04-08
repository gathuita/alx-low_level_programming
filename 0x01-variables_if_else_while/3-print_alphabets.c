#include <stdio.h>

/**
 * main - print lowercase a-z and uppercase A-Z using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*it prints lowercases*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*print uppercase A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
