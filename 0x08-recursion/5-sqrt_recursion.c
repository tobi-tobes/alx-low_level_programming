#include "main.h"

int sqrt_finder(int a, int i, int counter);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be found
 *
 * Return: The square root of the number or -1 if no natural root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_finder(n, 1, 1));
}

/**
 * sqrt_finder - calculates natural square root of a number
 * @a: number whose square root is to be found
 * @i: number to subtract from a
 * @counter: counter for square root
 *
 * Return: The square root of the number or -1 if no natural root.
 */
int sqrt_finder(int a, int i, int counter)
{
	if (i > a)
		return (-1);
	if (i == a)
		return (counter);
	return sqrt_finder(a - i, i + 2, counter + 1);
}
