#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to be printed out
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
