#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 *
 * Return: pointer to beginning of substring or NULL if nothing found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
