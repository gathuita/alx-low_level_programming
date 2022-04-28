#include "main.h"
int find_sqrt(int k, int i);

/**
 * find_sqrt - Finds the square root of a number.
 * @k: The number to find the square root of.
 * @i: The root to be tested.
 *
 * Return: The square root.
 *         -1 if @k doesn't have a natural square.
 */
int find_sqrt(int k, int i)
{
	if ((i * i) == k)
		return (i);

	if (i == k / 2)
		return (-1);

	return (find_sqrt(k, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: is the sqrt parameter.
 * Return: -1 if n is not a < 0.
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, i));
}
