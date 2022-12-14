#include <unistd.h>

/**
 * times_table - prints the 9 times table
 *
 * Returns nothing
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i, j, m, m_casted, m_upper, m_lower;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = (i * j);
			m_casted = m + '0';
			m_upper = (m / 10) + '0';
			m_lower = (m % 10) + '0';

			if (m > 9)
			{
				write(1, &m_upper, 1);
				write(1, &m_lower, 1);
			}
			else
				write(1, &m_casted, 1);
			if (j == 9)
				continue;
			else
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		}
		write(1, "\n", 1);
	}
}
