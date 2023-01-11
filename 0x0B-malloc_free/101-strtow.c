#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: array of split strings
 */
char **strtow(char *str)
{
	int brk = 0, wlen = 0, n = 0, p = 0, k, m;
	char **words;

	if (str == NULL || *str == 0)
	{
		return (NULL);
	}

	for (k = 0; str[k] != '\0'; k++)
	{
		if ((str[k] != 32 && str[k + 1] == 32) ||
		    (str[k] != 32 && str[k + 1] == '\0'))
		{
			brk++;
		}
	}

	if (brk == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (brk + 1));

	if (words == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k] != '\0' && n < brk; k++)
	{
		if (str[k] != 32)
		{
			for (m = 0; str[k + m] != 32 && str[k + m] != '\0'; m++)
			{
				wlen++;
			}
			words[n] = malloc(sizeof(char) * (wlen + 1));

			if (words[n] == NULL)
			{
				return (NULL);
			}

			for (m = 0; str[k + m] != 32 && str[k + m] != '\0'; m++)
			{
				words[n][p] = str[k + m];
				p++;
			}
			words[n][p] = '\0';
			k += wlen;
			m = wlen = p = 0;
			n++;
		}
	}
	return (words);
}
