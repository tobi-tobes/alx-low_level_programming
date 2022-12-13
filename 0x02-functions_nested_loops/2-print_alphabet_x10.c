#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times.
 *
 * Return: No return value.
 */
void print_alphabet_x10(void)
{
	char a;
	int c;
;
	c = 1;

	while (c <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			write(1, &a, 1);
			a++;
		}
		write(1, "\n", 1);
		c++;
	}
}
