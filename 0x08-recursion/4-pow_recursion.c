#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to be multiplied
 * @y: exponent
 *
 *
 * Return: x raised to the power of y or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
