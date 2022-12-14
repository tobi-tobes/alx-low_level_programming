#include <unistd.h>

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * No return value
 */
void jack_bauer(void)
{
	int h;
	int m;
	int h1;
	int h2;
	int m1;
	int m2;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			h1 = (h / 10) + '0';
			h2 = (h % 10) + '0';
			m1 = (m / 10) + '0';
			m2 = (m % 10) + '0';

			write(1, &h1, 1);
			write(1, &h2, 1);
			write(1, ":", 1);
			write(1, &m1, 1);
			write(1, &m2, 1);
			write(1, "\n", 1);
		}
	}
}
