#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints string.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of string parameters.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list s;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(s);
}
