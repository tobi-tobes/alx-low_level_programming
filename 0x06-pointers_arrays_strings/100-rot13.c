#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @c: pointer to the string to be encoded
 *
 * Return: encoded string.
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		while ((c[i] >= 'A' && c[i] <= 'Z') ||
		       (c[i] >= 'a' && c[i] <= 'z'))
		{
			if ((c[i] >= 'N' && c[i] <= 'Z') ||
			    (c[i] >= 'n' && c[i] <= 'z'))
			{
				c[i] = c[i] - 13;
				break;
			}
			c[i] = c[i] + 13;
			break;
		}
	}
	return (c);
}
