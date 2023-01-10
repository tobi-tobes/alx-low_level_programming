#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with specific char.
 * @size: size of array
 * @c: character to initialize array with
 *
 *
 * Return: pointer to array if successful, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *s;
		unsigned int j;

		s = malloc(sizeof(char) * size);

		if (s == NULL)
		{
			return ('\0');
		}
		for (j = 0; j < size; j++)
		{
			s[j] = c;
		}
		return (s);
	}
	return ('\0');
}
