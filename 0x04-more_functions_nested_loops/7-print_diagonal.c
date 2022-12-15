#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @n: Determines length of line
 *
 * Return: No value.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
