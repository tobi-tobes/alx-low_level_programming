#include "main.h"

/**
 * times_table_checker - gives appropriate times table depending on input.
 *@n: input for function
 *
 * Return: no value.
 */
void times_table_checker(int n)
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
