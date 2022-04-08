#include <stdio.h>

/**
 * main - Print all alphabets in lowercase a-z except q and e
 * Result: Always 0 (Success)
 */
int main(void)
{
	char  lower = 'a';

	while (lower <= 'z' && lower != q || lower != e)
	{
		putchar(lower);
		lower++;
	}

	putchar('\n');

	return (0);
}
