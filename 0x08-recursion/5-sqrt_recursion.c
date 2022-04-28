#includei "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: is the sqrt parameter.
 * Return: -1 if n is not a < 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion(n));
}
