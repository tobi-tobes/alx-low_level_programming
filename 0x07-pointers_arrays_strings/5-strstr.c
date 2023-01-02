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
	int i, j, k, counter, needle_count;
	char *found;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i + 1;
			counter = needle_count = 1;

			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[k] == needle[j])
				{
					counter++;
					needle_count++;
					k++;
				}
				else
					break;
			}
			if (counter == needle_count)
			{
				found = &haystack[i];
				return (found);
			}
		}
	}
	return (NULL);
}
