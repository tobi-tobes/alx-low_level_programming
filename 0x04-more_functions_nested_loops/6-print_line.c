#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: determines length of line
 *
 * Return: no value
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
