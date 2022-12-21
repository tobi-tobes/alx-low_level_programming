#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to resulting appended string
 * @src: pointer to string to be appended to dest
 *
 * Return: appended dest string
 */
char *_strcat(char *dest, char *src)
{
	int length, i, j;

	length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; src[i] != '\0'; j++)
	{
		dest[length] = src[j];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
