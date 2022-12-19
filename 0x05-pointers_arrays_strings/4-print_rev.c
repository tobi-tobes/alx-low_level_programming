#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be reversed and printed
 *
 * Return: no value.
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1

	while (i <= 0)
	{
		_putchar(s[i]);
		i--
	}
	_putchar('\n');
}
