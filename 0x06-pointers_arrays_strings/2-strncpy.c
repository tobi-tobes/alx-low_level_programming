#include "main.h"

/**
 * _strncpy - copies n bytes of src to dest
 * @dest: pointer to copied string
 * @src: pointer to string to be copied
 * @n: number of bytes of src to copy
 *
 * Return: copied dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] = '\0')
			dest[i] = " ";
		else
			dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
