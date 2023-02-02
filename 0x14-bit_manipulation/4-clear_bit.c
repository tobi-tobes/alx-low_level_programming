#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be converted
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearer;

	if (index < sizeof(unsigned long int) * 8)
	{
		clearer = ~(1 << index);

		*n = *n & clearer;

		return (1);
	}
	return (-1);
}
