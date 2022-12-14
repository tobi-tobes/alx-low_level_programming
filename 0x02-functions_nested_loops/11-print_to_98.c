#include <unistd.h>

/**
 * print_to_98 - prints all the numbers from the giveb number to 98
 * @n: The character to print
 *
 * Return: No value
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i, u, l;

		while (n <= 98)
		{
			i = n + '0';
			u = (n / 10) + '0';
			l = (n & 10) + '0';

			if (n > 9)
			{
				write(1, &u, 1);
				write(1, &l, 1);
			}
			else
				write(1, &i, 1);
			if (n != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			i = n + '0';
			u = (n / 10) + '0';
			l = (n & 10) + '0';

			if (n > 9)
			{
				write(1, &u, 1);
				write(1, &l, 1);
			}
			else
				write(1, &i, 1);
			if (n != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			n--;
		}
	}
	else
	{
		i = n + '0';
		u = (n / 10) + '0';
		l = (n % 10) + '0';

		write(1, &u, 1);
		write(1, &l, 1);
	}
	write(1, "\n", 1);
}
