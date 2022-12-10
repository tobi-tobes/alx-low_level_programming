#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int h;
	int t;
	int u;

	i = 0;
	h = (i / 100) % 10;
	t = (i / 10) % 10;
	u = i % 10;

	for (; i < 790; i++)
	{
		if (u == t || h == u || h == t)
			continue;
		else if (h > t || h > u || t > u)
			continue;
		else
		{
			putchar(h);
			putchar(t);
			putchar(u);
			if (i == 789)
				continue;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
