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
	char rep;

	string_rev = s;
	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 1; i < length; i++)
	{
		string_rev++;
	}
	for (j = 0; j < (length / 2); j++)
	{
		rep = s[i];
		s[i] = *string_rev;
		*string_rev = rep;
		string_rev--;
	}
}
