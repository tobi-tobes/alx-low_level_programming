#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length will be checked
 *
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}
