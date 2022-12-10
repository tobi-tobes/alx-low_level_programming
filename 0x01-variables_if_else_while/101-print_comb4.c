#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 790; i++)
	{
		if ((i % 10) == ((i / 10) % 10) ||
		    ((i / 100) % 10) == (i % 10) ||
		    ((i / 100) % 10) == ((i /10) % 10))
			continue;
		else if (((i / 100) % 10) > ((i / 10) % 10) ||
			 ((i / 100) % 10) > (i % 10) ||
			 ((i / 10) % 10) > (i % 10))
			continue;
		else
		{
			putchar((i / 100) % 10) + '0');
			putchar((i / 10) % 10) + '0');
			putchar((i % 10) + '0');
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
