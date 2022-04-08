#include <stdio.h>

/**
 * main - print all numbers base 16
 * Return:  0 always when its a success
 */
int main(void)
{
	int num = '0';
	int hexad = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (hexad <= 'f')
	{
		putchar (hexad);
		hexad++;
	}

	putchar('\n');
	return (0);
}
