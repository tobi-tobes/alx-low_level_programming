#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endian, or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	if (*c)
	{
		return (1);
	}
	return (0);
}
