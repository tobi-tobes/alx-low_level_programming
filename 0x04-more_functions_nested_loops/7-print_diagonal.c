#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
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
			for (j = 1; j <= i - 1; j++)
			{
				if (i != 1)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
