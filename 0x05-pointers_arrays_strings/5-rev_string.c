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
	int i, j;
	char *string_rev;
	char rep;

	string_rev = s;

	for (i = 1; (unsigned)i < strlen(s); i++)
	{
		string_rev++;
	}
	for (j = 0; (unsigned)j < strlen(s) / 2; j++)
	{
		rep = s[i];
		s[i] = *string_rev;
		*string_rev = rep;
		string_rev--;
	}
}
