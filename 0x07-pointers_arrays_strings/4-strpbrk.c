#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string with acceptable characters
 *
 * Return: pointer to byte in s or NULL if nothing found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *found;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = &s[i];
				return (found);
			}
		}
	}
	return (NULL);
}
