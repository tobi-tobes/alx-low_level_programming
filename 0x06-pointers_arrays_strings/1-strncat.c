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
	int length_one, length_two, k, i, j;

	length_one = length_two = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length_one++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		length_two++;
	}
	for (j = 0; j < length_two; j++)
	{
		if (src[j])
			dest[length_one + j] = src[j];
		if (j == n - 1)
		{
			dest[length_one + n] = '\0';
			break;
		}
	}

	return (dest);
}
