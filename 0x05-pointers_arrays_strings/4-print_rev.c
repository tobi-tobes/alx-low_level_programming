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
	char *rev_string;
	int i;

	*rev_string = strrev(s);

	for (i = 0; i < strlen(rev_string); i++)
	{
		_putchar(str[i]);
	}
	_putchar("\n");
}
