#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no value
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int n;
	int c;

	n = 0;

	while (n < 10)
	{
		c = 0;

		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
				_putchar(c + '0');
			c++;
		}
		write(1, "\n", 1);
		n++;
	}
}
