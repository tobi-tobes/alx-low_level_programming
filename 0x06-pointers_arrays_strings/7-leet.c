#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: pointer to the string to be encoded
 *
 * Return: encoded string.
 */
char *leet(char *c)
{
	int i, j;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	char leet_num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == letters[j] || c[i] == letters[j] + 32)
			{
				c[i] = leet_num[j];
			}
		}
	}
	return (c);
}
