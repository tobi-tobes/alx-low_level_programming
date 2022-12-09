#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[27];

	/* declare alphabet variable */
	alphabet = "abcdefghijklmnopqrstuvwxyz";

	/* use for loop and putchar to print alphabet */
	for (int i = 0; i < 27; i++)
	{
		if (alphabet[i] == '\0')
			putchar("\n");
		else
			putchar(alphabet[i]);
	}
	return (0);
}
