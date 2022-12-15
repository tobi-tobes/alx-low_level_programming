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
	int i, j, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i != 1)
			{
				k = 0;

				while (k < (i - 1))
				{
					_putchar(' ');
					k++;
				}
			}
			for (j = 1; j <= n; j++)
			{
				if (j == n)
				{
					_putchar('\\');
				}
				else
					continue;
			}
			_putchar('\n');
		}
	}
}
