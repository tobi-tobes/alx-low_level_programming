#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by new line
 *
 * Return: no value
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
