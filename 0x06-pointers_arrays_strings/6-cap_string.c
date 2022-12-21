#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @c: string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i, j, k, length;

	char special_chars[] = {' ', '\n', '\t', '.', ';', '?', '!', '"',
			      ')', '(', '{', '}', ','};
	length = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; j < length; j++)
	{
		k = 0;

		while (k < 13)
		{
			if ((c[j] >= 'a' && c[j] <= 'z') &&
			    ((c[j - 1] == special_chars[k]) || j == 0))
			{
				c[j] = c[j] - 32;
				k++;
			}
			else
				continue;
		}
	}
	return (c);
}
