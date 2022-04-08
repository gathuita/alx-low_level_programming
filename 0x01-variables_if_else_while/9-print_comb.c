#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 * Return: always 0
 */

int main(void)
{
	int singlenum = '0';

	while (singlenum <= '9')
	{
		putchar(singlenum);

		if (singlenum != '9')
		{

		putchar(',');

		putchar(' ');

		}
		singlenum++;
	}

	putchar('\n');

	return (0);
}
