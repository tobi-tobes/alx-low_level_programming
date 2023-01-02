#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string to be edited
 * @b: constant byte to be placed in string
 * @n: number of bytes in memory to be filled
 *
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
