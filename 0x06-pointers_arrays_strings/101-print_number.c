#include "main.h"

/**
 * print_number - prints an integer
 * @n: The character to print
 *
 * Return: no value;
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
	unsigned int num, size;
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	size = 1000000000;
	do {
		if (size <= num || size == 1)
			_putchar((num / size) % 10 + '0');
		size = size / 10;
	} while (size != 0);
}
