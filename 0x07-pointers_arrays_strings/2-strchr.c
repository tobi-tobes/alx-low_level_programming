#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to find
 *
 * Return: pointer to c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *found;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found = &s[i];
			return (found);
		}
	}
	return (NULL);
}
