#include <unistd.h>
/**
 * print_times_table - prints the n times table starting with 0
 * @n: number to be put in
 *
 * Returns nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n))
{
	if (n > 15 || n < 0)
		return;
	else
	{
		int i, j, u, l, hu, hm;

		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				m = (i * j);
				u = (m / 10) + '0';
				l = (m % 10) + '0';
				hu = (m / 100) + '0';
				hm = ((m / 10) % 10) + '0';
				mt = m + '0';

				if (m > 99)
				{
					write(1, ",", 1);
					write(1, " ", 1);
					write(1, &hu, 1);
					write(1, &hm, 1);
					write(1, &l, 1);
				}
				else if (m > 9)
				{
					write(1, ",", 1);
					write(1, " ", 1);
					write(1, " ", 1);
					write(1, &hm, 1);
					write(1, &l, 1);
				}
				else
				{
					if (j != 0)
					{
						write(1, ",", 1);
						write(1, " ", 1);
						write(1, " ", 1);
						write(1, " ", 1);
					}
					write(1, &mt, 1);
				}
			}
			if (i != n)
			{
				write(1, "\n", 1);
			}
		}
	}
}
