#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be converted
 * @index: the index of the bit to get, starting from 0
 *
 * Return: value of the bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter = 0;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	while (n > 0)
	{
		if (counter == index)
		{
			return (n & 1);
		}
		n = n >> 1;

		counter++;
	}
	return (-1);
}
