#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);

		alpha--;
	}

	putchar('\n');

	return (0);
}
