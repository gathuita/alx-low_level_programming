#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @a: char to print
 */
void print_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * print_int - prints an int
 * @a: int to print
 */
void print_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * print_float - prints a float
 * @a: float to print
 */
void print_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * print_string - prints a char
 * @a: string to print
 */
void print_string(va_list a)
{
	char *current;

	current = va_arg(a, char *);
	if (current == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", current);
}

/**
 * print_all - prints all args passed to function
 * @format: list of args to give data types.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	const char *copy;
	formatter formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	char *sep;

	sep = "";
	i = j = 0;
	copy = format;
	va_start(list, format);
	while (copy && copy[j] != '\0')
	{
		i = 0;
		while (formats[i].flag)
		{
			if (formats[i].flag[0] == copy[j])
			{
				printf("%s", sep);
				(formats[i].f)(list);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
