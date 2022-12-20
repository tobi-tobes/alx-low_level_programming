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
	int i, temp, length;

	length = strlen(s);

	for (i = 1; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
