#include <stdio.h>

/**
 * main - print numbers base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar("%i");
		num++;
	}

	putchar('\n');

	return (0);

}