#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be converted
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter;

	if (index < sizeof(unsigned long int) * 8)
	{
		setter = 1 << index;

		*n = *n | setter;

		if (*n | setter)
		{
			return (1);
		}
	}
	return (-1);
}
