#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times.
 *
 * Return: No return value.
 */
void print_alphabet_x10(void);
{
	char a;
	int c;

	a = 'a';
	c = 10;

	while (c <= 10)
	{
		while (a <= 'z')
		{
			write(1, &a, 1);
			a++;
		}
		write(1, "\n", 1);
	}
}
