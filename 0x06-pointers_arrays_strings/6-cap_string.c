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
	int j, k;
	int nspecial = 13;
	char special_chars[] = {32, '\n', '\t', '.', ';', '?', '!', '"',
			      ')', '(', '{', '}', ','};

	for (j = 0; c[j]; j++)
	{
		for (k = 0; k < nspecial; k++)
		{
			if ((c[j] >= 'a' && c[j] <= 'z') &&
			    (j == 0 || c[j - 1] == special_chars[k]))
			{
				c[j] = c[j] - 32;
			}
		}
	}
	return (c);
}
