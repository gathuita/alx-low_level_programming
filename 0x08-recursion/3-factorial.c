#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: parameter of the factorial.
 * Return: -1 if less than 0, and 1 if = 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return(n * factorial(n - 1));
}
