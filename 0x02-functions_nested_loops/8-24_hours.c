#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			write(1, (h / 10) + '0', 1);
			write(1, (h % 10) + '0', 1);
			write(1, ':', 1);
			write(1, (m / 10) + '0', 1);
			write(1, (m % 10) + '0', 1);
			write(1, '\n', 1);
		}
	}
}
