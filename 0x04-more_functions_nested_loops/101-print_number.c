#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints an integer
 * @n: The character to print
 *
 * Return: no value;
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (abs(n) > 9)
		{
			_putchar((n / 10) + '0');
		}
		else if (abs(n) > 99)
		{
			_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
		}
		else if (abs(n) > 999)
		{
			_putchar((n / 1000) + '0');
			_putchar(((n / 100) % 10) + '0');
			_putchar(((n / 10) % 10) + '0');
		}
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
	}
	else if (n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
	}
	else if (n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
	}
	_putchar((n % 10) + '0');
}
