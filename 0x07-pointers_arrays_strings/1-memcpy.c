#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: string to be overwritten
 * @src: string to be copied
 * @n: number of bytes in memory to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
