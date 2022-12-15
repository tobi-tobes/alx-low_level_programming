#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: number to be put in
 *
 * Returns nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, m;
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = (i * j);
				if (m > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				else if (m > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(m + '0');
				}
			}
			if (i != n)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
