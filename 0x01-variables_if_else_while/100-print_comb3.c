#include <stdio.h>

/**
 * main - prrint all possible combinations of two digits
 * Return: 0 always
 */

int main(void)
{
	long int n = '10'
	
	while (n <= '99')
	{
		putchar(n);
		if (n != '99')
		{
			putchar(',');

			putchar(' ');

		}
		n++;
	}

	putchar('\n');

	return (0);
}
