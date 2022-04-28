#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: is the base of y.
 * @y: is the power of x.
 * Return: if y < 0 return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y));
}
