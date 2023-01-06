#include <unistd.h>
#include <stdlib.h>

/**
 * _abs - computes the absolute value
 * @n: The character to print
 *
 * Return: On success, any number.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	return (abs(n));
}
