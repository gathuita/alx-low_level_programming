#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - Finds format info.
 *
 * @flag: flag to format struct.
 * @f: Call back function.
 */
typedef struct format
{
	char *flag;
	void (*f)(va_list);
} formatter;

void print_int(va_list);
void print_char(va_list);
void print_float(va_list);
void print_string(va_list);

#endif
