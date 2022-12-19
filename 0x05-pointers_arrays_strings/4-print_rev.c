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

	i = strlen(s);

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
