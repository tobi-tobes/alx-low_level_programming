#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0x0; n <= 0xf; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
