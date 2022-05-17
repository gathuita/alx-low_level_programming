#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 *
 * @separator: string, separator between numbers.
 * @n: Number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num1;
	va_list s;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		num1 = va_arg(s, int);
		printf("%d", num1);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(s);

	printf("\n");
}
