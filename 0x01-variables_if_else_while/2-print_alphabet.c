#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c;

	/* declare c variable */
	c = "a";

	/* use while loop and putchar to print alphabet */
	while (c <= "z")
	{
		putchar(c);
		c = c + 1;
	}
	putchar("\n");
	return (0);
}
