#include <unistd.h>

/**
 * add - adds two integers and returns the result
 * @a: first integer to be added
 * @b: second integer to be added
 *
 * Return: On success sum.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}
