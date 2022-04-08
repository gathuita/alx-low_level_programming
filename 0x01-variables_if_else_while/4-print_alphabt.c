#include <stdio.h>

/**
 * main - Print all alphabets in lowercase a-z except q and e
 * Result: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char exceptq = 'q';
	char excepte = 'e';

	while (lower <= 'z' && lower != exceptq || lower != excepte)
	{
		putchar(lower);
		lower++;
	}

	putchar('\n');

	return (0);
}
