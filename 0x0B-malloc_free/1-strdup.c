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

	len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	copy = malloc(sizeof(char) * len);

	if (copy == NULL)
	{
		return ('\0');
	}
	for (j = 0; j < len; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
