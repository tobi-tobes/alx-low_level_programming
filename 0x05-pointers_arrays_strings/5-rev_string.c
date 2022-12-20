#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *@s: string to be reversed
 *
 * Return: no value
 */
void rev_string(char *s)
{
	int i, j, length;
	char *string_rev;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 1; i < length; i++)
	{
		string_rev++;
	}
	for (j = length - 1; j <= 0; j--)
	{
		string_rev[i] = s[i];
	}
	s = string_rev;
}
