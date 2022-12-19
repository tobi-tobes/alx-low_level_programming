#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length, i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
}
