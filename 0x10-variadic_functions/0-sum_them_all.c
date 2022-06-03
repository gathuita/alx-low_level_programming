#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of parameters.
 *
 * @n: Number of parameters.
 *
 * Return: The total sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int a, sum = 0;
	unsigned int i;
	va_list add;

	va_start(add, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		a = va_arg(add, int);
		sum += a;
	}
	va_end(add);

	return (sum);
}
