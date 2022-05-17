#include "variadic_functions.h"
/**
 * sum_them_all - sums all parameters of a function.
 * @n: number of parameters in afunction.
 * Rrturn: 0 if n == 0, else return sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int p, sum = 0;
	unsigned int i;
	va_list sum1;

	var_start(sum1,n);

	if (n == )
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		p = va_arg(sum1, int);
		sum = sum + p;
	}
	va_end(sum1);

	return (sum);
}
