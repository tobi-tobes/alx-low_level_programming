#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings with at most n bytes from src
 * @dest: pointer to resulting appended string
 * @src: pointer to string to be appended to dest
 * @n: number of bytes of src to concatenate with dest
 *
 * Return: appended dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i, j;

	length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[length] = src[j];
		length++;
		if (j == n - 1)
			break;
	}

	dest[length + n + 1] = '\0';

	return (dest);
}
