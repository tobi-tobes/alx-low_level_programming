#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *@s: string to be reversed
 *
 * Return: no value
 */
void rev_string(char *s)
{
	int i;

	i = strlen(s);

	for (i -= 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
}
