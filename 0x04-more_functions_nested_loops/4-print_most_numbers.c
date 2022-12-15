#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4, followed by new line
 *
 * Return: no value
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		if (c != '2' || c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}