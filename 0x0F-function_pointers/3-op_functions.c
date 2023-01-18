#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the remainder of division of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
