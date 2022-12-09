#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declare variables for counters */
	char c;
	char C;

	/* use for loop and putchar to print alphabet */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	/* use for loop and putchar to print uppercase alphabet */
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
