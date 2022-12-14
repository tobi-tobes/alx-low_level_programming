#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			int i;

			i = n + '0';

			write(1, &i, 1);
			if (n == 98)
				continue;
			else
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			int i;

			i = n + '0';

			write(1, &i, 1);
			if (n == 98)
				continue;
			else
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			n--;
		}
	}
	else
	{
		int i;

		i = n + '0';

		write(1, &i, 1);
	}
}
