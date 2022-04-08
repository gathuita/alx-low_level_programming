#include <stdio.h>
/**
 * main - print 0 to 9
 * Return: Always  0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');

	return (0);
}
