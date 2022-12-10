#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declare int variables for for loop counter */
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if ((j / 10) == 0 && (j / 10) == (j % 10))
				continue;
			else if ((i / 10) == (j / 10) && (i % 10) == (j % 10))
				continue;
			else if ((i / 10) == (j / 10) && (i % 10) > (j % 10))
				continue;
			else if ((i / 10) > (j / 10) && (i % 10) > (j % 10))
				continue;
			else if ((i / 10) > (j / 10) && (i % 10) == (j % 10))
				continue;
			else if ((i / 10) > (j / 10))
				continue;
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (j == 99 && i == 98)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
