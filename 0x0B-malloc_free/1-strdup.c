#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies given string by dynamically allocating memory
 * @str: string to be copied
 *
 *
 * Return: pointer to copied string if successful, otherwise NULL
 */
char *_strdup(char *str)
{
	int len, j;
	char *copy;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len])
	{
		len++;
	}
	copy = malloc((sizeof(char) * len) + 1);

	if (copy == NULL)
	{
		return ('\0');
	}
	for (j = 0; j < len; j++)
	{
		copy[j] = str[j];
	}
	copy[j] = '\0';

	return (copy);
}
