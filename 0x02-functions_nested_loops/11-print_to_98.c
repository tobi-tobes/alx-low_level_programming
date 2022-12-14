#include <unistd.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all the numbers from the giveb number to 98
 * @n: The character to print
 *
 * Return: No value
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int u, l, hm, hu;

	if (n < 98)
	{
		while (n <= 98)
		{
			u = (abs(n) / 10) + '0';
			l = (abs(n) % 10) + '0';
			hm = ((abs(n) / 10) % 10) + '0';
			hu = (abs(n) / 100) + '0';

			if (n < 0)
			{
				write(1, "-", 1);
				if (abs(n) > 99)
				{
					write(1, &hu, 1);
					write(1, &hm, 1);
				}
				else if (abs(n) > 9)
				{
					write(1, &u, 1);
				}
			}
			else if (n > 9)
			{
				write(1, &u, 1);
			}
			write(1, &l, 1);
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
			u = (n / 10) + '0';
			l = (n % 10) + '0';
			hm = ((n / 10) % 10) + '0';
			hu = (n / 100) + '0';

			if (n > 99)
			{
				write(1, &hu, 1);
				write(1, &hm, 1);
			}
			else
				write(1, &u, 1);
			write(1, &l, 1);
			if (n != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			n--;
	}
	else
	{
		u = (n / 10) + '0';
		l = (n % 10) + '0';

		write(1, &u, 1);
		write(1, &l, 1);
	}
	write(1, "\n", 1);
}
